% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/relationshipCalculator.R
\name{relationshipCalculator}
\alias{relationshipCalculator}
\title{m/z relationship calculation}
\usage{
relationshipCalculator(mz, limit = 0.001, modes = NULL,
  adducts = c("[M-H]1-", "[M+Cl]1-", "[M+K-2H]1-"), isotopes = NULL,
  transformations = NULL, adductTable = adducts(),
  isotopeTable = isotopes(), transformationTable = transformations())
}
\arguments{
\item{mz}{numeric \code{vector} of accurate m/z}

\item{limit}{limit of deviation for thresholding associations. Defaults to 0.001}

\item{modes}{character vector of ionisation modes of input mz}

\item{adducts}{character vector of adducts to use. If \code{NULL} all available adducts will be used. If \code{modes} is not \code{NULL}, this should be named list, the names denoting the adduct aquisition modes.}

\item{isotopes}{character vector of isotopes to use.}

\item{transformations}{character vector of transformations to use}

\item{adductTable}{table containing adduct formation rules. Defaults to \code{\link{adducts}()}.}

\item{isotopeTable}{table containing isotope rules. Defaults to \code{\link{isotopes}()}.}

\item{transformationTable}{table containing transformation rules. Defaults to \code{\link{transformations}()}.}
}
\description{
adduct, isotope and biotransfromation calculation.
}
\examples{
relationshipCalculator(c(132.03023,168.00691))

## with modes declared
relationshipCalculator(c(132.03023,172.00067),
                      modes = c('n','p'),
                      adducts = list(n = c("[M-H]1-","[M+Cl]1-","[M+K-2H]1-"), 
                                     p = c('[M+H]1+','[M+K]1+','[M+Na]1+')))
}
\author{
Jasen Finch
}
