#' mzAnnotation
#' @name mzAnnotation
#' @useDynLib mzAnnotation
#' @importFrom Rcpp evalCpp
#' @name mzAnnotation

globalVariables(c('Name','ID','MF','Accurate Mass','Smile 1','Adduct',
                  'PPM Error','RelativeAbundance','Element','AtomicMass',
                  'Frequency','Isotope','MF Change','Probability',
                  'Relative Abundance','C','S','Elements','Error',
                  'Theoretical m/z','True','desc','m/z','Adducts',
                  'Negative_Charge','Positive_Charge','SMILE','Total_Charge',
                  'NHH','COO','ACCESSION_ID','Accurate_Mass','Measured m/z',
                  'HBA1','TPSA','.','Possible','Rule'
))