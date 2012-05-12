#ifndef _SpatialTools_KRIGE_H
#define _SpatialTools_KRIGE_H

#include <RcppArmadillo.h>

RcppExport SEXP krige_uk(SEXP Xs, SEXP ys, SEXP Vs, SEXP Xps, SEXP Vps, SEXP Vops);

RcppExport SEXP pweights_uk(SEXP Xs, SEXP Vs, SEXP Xps, SEXP Vps, SEXP Vops);

RcppExport SEXP mspe_uk(SEXP ws, SEXP Vs, SEXP Vps, SEXP Vops);

RcppExport SEXP krige_ok(SEXP ys, SEXP Vs, SEXP Vps, SEXP Vops);

RcppExport SEXP krige_sk(SEXP ys, SEXP Vs, SEXP Vps, SEXP Vops, SEXP ms);

RcppExport SEXP krige_uk2(SEXP ys, SEXP Vs, SEXP Vps, SEXP Vops, SEXP Xs, SEXP Xps, SEXP rws, SEXP nsims, 
	SEXP Vediags, SEXP methods);

RcppExport SEXP krige_ok2(SEXP ys, SEXP Vs, SEXP Vps, SEXP Vops, SEXP rws, SEXP nsims, SEXP Vediags, SEXP methods);

RcppExport SEXP krige_sk2(SEXP ys, SEXP Vs, SEXP Vps, SEXP Vops, SEXP ms, SEXP rws, SEXP nsims, SEXP Vediags, SEXP methods);

#endif
