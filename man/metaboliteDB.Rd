% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/metaboliteDB.R
\name{metaboliteDB}
\alias{metaboliteDB}
\title{metaboliteDB}
\usage{
metaboliteDB(accessions, descriptors, connection = NULL,
  type = "local")
}
\arguments{
\item{accessions}{tibble containing accession information. If \code{type = 'remote'} this should be the name of the table containing the accession information within the SQL database.}

\item{descriptors}{tibble containing descriptor information as returned by \code{descriptors()}. If \code{type = 'remote'} this should be the name of the table containing the descriptor information within the SQL database.}

\item{connection}{If \code{type = 'remote'} this should be a valid database connection as returned by \code{DBI::dbconnect()}.}

\item{type}{set to either \code{'local'} for in-memory databases or \code{remote} for SQL database connections.}
}
\description{
Build a metabolite database ready for use.
}
\examples{
db <- metaboliteDB(aminoAcids,descriptors(aminoAcids))
}
