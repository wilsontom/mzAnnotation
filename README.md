
mzAnnotation
============

[![Build Status](https://travis-ci.org/jasenfinch/mzAnnotation.svg?branch=devel)](https://travis-ci.org/jasenfinch/mzAnnotation) [![Build status](https://ci.appveyor.com/api/projects/status/b9wgaej0u690ls20/branch/devel?svg=true)](https://ci.appveyor.com/project/jasenfinch/mzannotation/branch/devel) [![Coverage Status](https://img.shields.io/codecov/c/github/jasenfinch/mzAnnotation/devel.svg)](https://codecov.io/github/jasenfinch/mzAnnotation?branch=devel)

An R package containing tools for putative annotation of accurate m/z

### Installation

To install run:

``` r
devtools::install_github('jasenfinch/mzAnnotation')
```

### Tools

Available tools include:

-   Adduct, isotope and biotransfromation relationship prediction

``` r
res <- relationshipPredictor(c(132.03023,168.00691),
                              limit = 0.001,
                              adducts = c("[M-H]1-", "[M+Cl]1-", "[M+K-2H]1-"))
res
#>       m/z1     m/z2 Adduct1  Adduct2 Isotope1 Isotope2 Transformation1
#> 1 132.0302 168.0069 [M-H]1- [M+Cl]1-       NA       NA              NA
#>   Transformation2 Error
#> 1              NA     0
```

-   Molecular formula generation

``` r
res <- generateMF(342.11621,
                  composition = c(C = 12,H = 22,N = 0,
                                O = 11,P = 0,S = 0),
                  generator = 'HR2')
res
#> # A tibble: 1 x 3
#>   MF         Mass `PPM Error`
#>   <chr>     <dbl>       <dbl>
#> 1 C12H22O11   342           0
```

-   Isotope distribution calculation

``` r
res <- isotopeDistribution(MF = 'C4H5O5',charge = -1)
res
#> # A tibble: 8 x 4
#>   Isotope      `m/z` `Relative Abundance` Probability
#>   <chr>        <dbl>                <dbl>       <dbl>
#> 1 <NA>           133            1.00        0.945    
#> 2 13C 1          134            0.0449      0.0424   
#> 3 18O 1          135            0.0100      0.00947  
#> 4 17O 1          134            0.00200     0.00189  
#> 5 13C 2          135            0.000756    0.000714 
#> 6 2H 1           134            0.000500    0.000472 
#> 7 13C 1; 18O 1   136            0.000450    0.000425 
#> 8 13C 1; 17O 1   135            0.0000900   0.0000850
```

-   Putative ionisation product searches

``` r
res <- PIPsearch(mz = 133.01378,mode = 'n',ppm = 5)
res
#> # A tibble: 6 x 9
#>   ID     Name  MF    `Accurate Mass` Smile Adduct Isotope `Theoretical m/…
#>   <chr>  <chr> <chr>           <dbl> <chr> <chr>  <chr>              <dbl>
#> 1 D27249 glyo… C2H2…            74.0 OC(=… [M+Ha… <NA>                 133
#> 2 D335   pyru… C3H4…            88.0 CC(=… [M+FA… <NA>                 133
#> 3 D27319 malo… C3H4…            88.0 OC(=… [M+FA… <NA>                 133
#> 4 D28303 3-hy… C3H4…            88.0 OC=C… [M+FA… <NA>                 133
#> 5 D27880 mala… C4H6…           134   OC(C… [M-H]… <NA>                 133
#> 6 D28332 3-de… C4H6…           134   OCC(… [M-H]… <NA>                 133
#> # ... with 1 more variable: `PPM Error` <dbl>
```
