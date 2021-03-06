% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/calcAdducts.R
\name{calcAdducts}
\alias{calcAdducts}
\title{calcAdducts}
\usage{
calcAdducts(id, db, adductTable = adducts())
}
\arguments{
\item{id}{accession id.}

\item{db}{object of class \code{MetaboliteDatabase}.}

\item{adductTable}{table of adduct rules. Defaults to adducts().}
}
\description{
calculate ionisation products for given database accession
}
\examples{
db <- metaboliteDB(aminoAcids,descriptors(aminoAcids))
add <- calcAdducts(1,db)
}
