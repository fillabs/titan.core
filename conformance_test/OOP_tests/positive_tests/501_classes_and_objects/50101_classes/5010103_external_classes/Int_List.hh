// This external class skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 7/CAX 105 7730 R2A
// for  (ethlel@HU-00001378) on Thu Dec  3 19:59:19 2020

// Copyright (c) 2000-2021 Ericsson Telecom AB

// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef Int__List_HH
#define Int__List_HH

class Int__List : public OBJECT {
public:
static const char* class_name() { return "Int_List"; }

protected:
virtual void add(const INTEGER& v);

protected:
virtual INTEGER get(const INTEGER& index);

public:
/* default constructor */
Int__List();

public:
virtual ~Int__List();

public:
virtual void log() const;
};

#endif
