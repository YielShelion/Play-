#pragma once

#include "MIPSAssembler.h"

class CEEAssembler : public CMIPSAssembler
{
public:
						CEEAssembler(uint32*);

	void				LQ(unsigned int, uint16, unsigned int);
	void				MFHI1(unsigned int);
	void				MFLO1(unsigned int);
	void				MTHI1(unsigned int);
	void				MTLO1(unsigned int);
	void				PADDW(unsigned int, unsigned int, unsigned int);
	void				PEXCH(unsigned int, unsigned int);
	void				PEXCW(unsigned int, unsigned int);
	void				PPACW(unsigned int, unsigned int, unsigned int);
	void				SQ(unsigned int, uint16, unsigned int);
};