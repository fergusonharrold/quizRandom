/* Automatically generated.  Do not edit */
/* See the tool/mkopcodec.tcl script for details. */
#if !defined(SQLITE_OMIT_EXPLAIN) \
 || defined(VDBE_PROFILE) \
 || defined(SQLITE_DEBUG)
#if defined(SQLITE_ENABLE_EXPLAIN_COMMENTS) || defined(SQLITE_DEBUG)
# define OpHelp(X) "\0" X
#else
# define OpHelp(X)
#endif
const char *sqlite3OpcodeName(int i){
 static const char *const azName[] = {
    /*   0 */ "Savepoint"        OpHelp(""),
    /*   1 */ "AutoCommit"       OpHelp(""),
    /*   2 */ "Transaction"      OpHelp(""),
    /*   3 */ "SorterNext"       OpHelp(""),
    /*   4 */ "Prev"             OpHelp(""),
    /*   5 */ "Next"             OpHelp(""),
    /*   6 */ "Checkpoint"       OpHelp(""),
    /*   7 */ "JournalMode"      OpHelp(""),
    /*   8 */ "Vacuum"           OpHelp(""),
    /*   9 */ "VFilter"          OpHelp("iplan=r[P3] zplan='P4'"),
    /*  10 */ "VUpdate"          OpHelp("data=r[P3@P2]"),
    /*  11 */ "Goto"             OpHelp(""),
    /*  12 */ "Gosub"            OpHelp(""),
    /*  13 */ "InitCoroutine"    OpHelp(""),
    /*  14 */ "Yield"            OpHelp(""),
    /*  15 */ "MustBeInt"        OpHelp(""),
    /*  16 */ "Jump"             OpHelp(""),
    /*  17 */ "Once"             OpHelp(""),
    /*  18 */ "If"               OpHelp(""),
    /*  19 */ "Not"              OpHelp("r[P2]= !r[P1]"),
    /*  20 */ "IfNot"            OpHelp(""),
    /*  21 */ "IfNullRow"        OpHelp("if P1.nullRow then r[P3]=NULL, goto P2"),
    /*  22 */ "SeekLT"           OpHelp("key=r[P3@P4]"),
    /*  23 */ "SeekLE"           OpHelp("key=r[P3@P4]"),
    /*  24 */ "SeekGE"           OpHelp("key=r[P3@P4]"),
    /*  25 */ "SeekGT"           OpHelp("key=r[P3@P4]"),
    /*  26 */ "IfNotOpen"        OpHelp("if( !csr[P1] ) goto P2"),
    /*  27 */ "IfNoHope"         OpHelp("key=r[P3@P4]"),
    /*  28 */ "NoConflict"       OpHelp("key=r[P3@P4]"),
    /*  29 */ "NotFound"         OpHelp("key=r[P3@P4]"),
    /*  30 */ "Found"            OpHelp("key=r[P3@P4]"),
    /*  31 */ "SeekRowid"        OpHelp("intkey=r[P3]"),
    /*  32 */ "NotExists"        OpHelp("intkey=r[P3]"),
    /*  33 */ "Last"             OpHelp(""),
    /*  34 */ "IfSmaller"        OpHelp(""),
    /*  35 */ "SorterSort"       OpHelp(""),
    /*  36 */ "Sort"             OpHelp(""),
    /*  37 */ "Rewind"           OpHelp(""),
    /*  38 */ "IdxLE"            OpHelp("key=r[P3@P4]"),
    /*  39 */ "IdxGT"            OpHelp("key=r[P3@P4]"),
    /*  40 */ "IdxLT"            OpHelp("key=r[P3@P4]"),
    /*  41 */ "IdxGE"            OpHelp("key=r[P3@P4]"),
    /*  42 */ "RowSetRead"       OpHelp("r[P3]=rowset(P1)"),
    /*  43 */ "Or"               OpHelp("r[P3]=(r[P1] || r[P2])"),
    /*  44 */ "And"              OpHelp("r[P3]=(r[P1] && r[P2])"),
    /*  45 */ "RowSetTest"       OpHelp("if r[P3] in rowset(P1) goto P2"),
    /*  46 */ "Program"          OpHelp(""),
    /*  47 */ "FkIfZero"         OpHelp("if fkctr[P1]==0 goto P2"),
    /*  48 */ "IfPos"            OpHelp("if r[P1]>0 then r[P1]-=P3, goto P2"),
    /*  49 */ "IfNotZero"        OpHelp("if r[P1]!=0 then r[P1]--, goto P2"),
    /*  50 */ "IsNull"           OpHelp("if r[P1]==NULL goto P2"),
    /*  51 */ "NotNull"          OpHelp("if r[P1]!=NULL goto P2"),
    /*  52 */ "Ne"               OpHelp("IF r[P3]!=r[P1]"),
    /*  53 */ "Eq"               OpHelp("IF r[P3]==r[P1]"),
    /*  54 */ "Gt"               OpHelp("IF r[P3]>r[P1]"),
    /*  55 */ "Le"               OpHelp("IF r[P3]<=r[P1]"),
    /*  56 */ "Lt"               OpHelp("IF r[P3]<r[P1]"),
    /*  57 */ "Ge"               OpHelp("IF r[P3]>=r[P1]"),
    /*  58 */ "ElseNotEq"        OpHelp(""),
    /*  59 */ "DecrJumpZero"     OpHelp("if (--r[P1])==0 goto P2"),
    /*  60 */ "IncrVacuum"       OpHelp(""),
    /*  61 */ "VNext"            OpHelp(""),
    /*  62 */ "Init"             OpHelp("Start at P2"),
    /*  63 */ "PureFunc"         OpHelp("r[P3]=func(r[P2@NP])"),
    /*  64 */ "Function"         OpHelp("r[P3]=func(r[P2@NP])"),
    /*  65 */ "Return"           OpHelp(""),
    /*  66 */ "EndCoroutine"     OpHelp(""),
    /*  67 */ "HaltIfNull"       OpHelp("if r[P3]=null halt"),
    /*  68 */ "Halt"             OpHelp(""),
    /*  69 */ "Integer"          OpHelp("r[P2]=P1"),
    /*  70 */ "Int64"            OpHelp("r[P2]=P4"),
    /*  71 */ "String"           OpHelp("r[P2]='P4' (len=P1)"),
    /*  72 */ "Null"             OpHelp("r[P2..P3]=NULL"),
    /*  73 */ "SoftNull"         OpHelp("r[P1]=NULL"),
    /*  74 */ "Blob"             OpHelp("r[P2]=P4 (len=P1)"),
    /*  75 */ "Variable"         OpHelp("r[P2]=parameter(P1,P4)"),
    /*  76 */ "Move"             OpHelp("r[P2@P3]=r[P1@P3]"),
    /*  77 */ "Copy"             OpHelp("r[P2@P3+1]=r[P1@P3+1]"),
    /*  78 */ "SCopy"            OpHelp("r[P2]=r[P1]"),
    /*  79 */ "IntCopy"          OpHelp("r[P2]=r[P1]"),
    /*  80 */ "ChngCntRow"       OpHelp("output=r[P1]"),
    /*  81 */ "ResultRow"        OpHelp("output=r[P1@P2]"),
    /*  82 */ "CollSeq"          OpHelp(""),
    /*  83 */ "AddImm"           OpHelp("r[P1]=r[P1]+P2"),
    /*  84 */ "RealAffinity"     OpHelp(""),
    /*  85 */ "Cast"             OpHelp("affinity(r[P1])"),
    /*  86 */ "Permutation"      OpHelp(""),
    /*  87 */ "Compare"          OpHelp("r[P1@P3] <-> r[P2@P3]"),
    /*  88 */ "IsTrue"           OpHelp("r[P2] = coalesce(r[P1]==TRUE,P3) ^ P4"),
    /*  89 */ "Offset"           OpHelp("r[P3] = sqlite_offset(P1)"),
    /*  90 */ "Column"           OpHelp("r[P3]=PX"),
    /*  91 */ "Affinity"         OpHelp("affinity(r[P1@P2])"),
    /*  92 */ "MakeRecord"       OpHelp("r[P3]=mkrec(r[P1@P2])"),
    /*  93 */ "Count"            OpHelp("r[P2]=count()"),
    /*  94 */ "ReadCookie"       OpHelp(""),
    /*  95 */ "SetCookie"        OpHelp(""),
    /*  96 */ "ReopenIdx"        OpHelp("root=P2 iDb=P3"),
    /*  97 */ "OpenRead"         OpHelp("root=P2 iDb=P3"),
    /*  98 */ "OpenWrite"        OpHelp("root=P2 iDb=P3"),
    /*  99 */ "OpenDup"          OpHelp(""),
    /* 100 */ "OpenAutoindex"    OpHelp("nColumn=P2"),
    /* 101 */ "BitAnd"           OpHelp("r[P3]=r[P1]&r[P2]"),
    /* 102 */ "BitOr"            OpHelp("r[P3]=r[P1]|r[P2]"),
    /* 103 */ "ShiftLeft"        OpHelp("r[P3]=r[P2]<<r[P1]"),
    /* 104 */ "ShiftRight"       OpHelp("r[P3]=r[P2]>>r[P1]"),
    /* 105 */ "Add"              OpHelp("r[P3]=r[P1]+r[P2]"),
    /* 106 */ "Subtract"         OpHelp("r[P3]=r[P2]-r[P1]"),
    /* 107 */ "Multiply"         OpHelp("r[P3]=r[P1]*r[P2]"),
    /* 108 */ "Divide"           OpHelp("r[P3]=r[P2]/r[P1]"),
    /* 109 */ "Remainder"        OpHelp("r[P3]=r[P2]%r[P1]"),
    /* 110 */ "Concat"           OpHelp("r[P3]=r[P2]+r[P1]"),
    /* 111 */ "OpenEphemeral"    OpHelp("nColumn=P2"),
    /* 112 */ "BitNot"           OpHelp("r[P2]= ~r[P1]"),
    /* 113 */ "SorterOpen"       OpHelp(""),
    /* 114 */ "SequenceTest"     OpHelp("if( cursor[P1].ctr++ ) pc = P2"),
    /* 115 */ "String8"          OpHelp("r[P2]='P4'"),
    /* 116 */ "OpenPseudo"       OpHelp("P3 columns in r[P2]"),
    /* 117 */ "Close"            OpHelp(""),
    /* 118 */ "ColumnsUsed"      OpHelp(""),
    /* 119 */ "SeekScan"         OpHelp("Scan-ahead up to P1 rows"),
    /* 120 */ "SeekHit"          OpHelp("set P2<=seekHit<=P3"),
    /* 121 */ "Sequence"         OpHelp("r[P2]=cursor[P1].ctr++"),
    /* 122 */ "NewRowid"         OpHelp("r[P2]=rowid"),
    /* 123 */ "Insert"           OpHelp("intkey=r[P3] data=r[P2]"),
    /* 124 */ "RowCell"          OpHelp(""),
    /* 125 */ "Delete"           OpHelp(""),
    /* 126 */ "ResetCount"       OpHelp(""),
    /* 127 */ "SorterCompare"    OpHelp("if key(P1)!=trim(r[P3],P4) goto P2"),
    /* 128 */ "SorterData"       OpHelp("r[P2]=data"),
    /* 129 */ "RowData"          OpHelp("r[P2]=data"),
    /* 130 */ "Rowid"            OpHelp("r[P2]=rowid"),
    /* 131 */ "NullRow"          OpHelp(""),
    /* 132 */ "SeekEnd"          OpHelp(""),
    /* 133 */ "IdxInsert"        OpHelp("key=r[P2]"),
    /* 134 */ "SorterInsert"     OpHelp("key=r[P2]"),
    /* 135 */ "IdxDelete"        OpHelp("key=r[P2@P3]"),
    /* 136 */ "DeferredSeek"     OpHelp("Move P3 to P1.rowid if needed"),
    /* 137 */ "IdxRowid"         OpHelp("r[P2]=rowid"),
    /* 138 */ "FinishSeek"       OpHelp(""),
    /* 139 */ "Destroy"          OpHelp(""),
    /* 140 */ "Clear"            OpHelp(""),
    /* 141 */ "ResetSorter"      OpHelp(""),
    /* 142 */ "CreateBtree"      OpHelp("r[P2]=root iDb=P1 flags=P3"),
    /* 143 */ "SqlExec"          OpHelp(""),
    /* 144 */ "ParseSchema"      OpHelp(""),
    /* 145 */ "LoadAnalysis"     OpHelp(""),
    /* 146 */ "DropTable"        OpHelp(""),
    /* 147 */ "DropIndex"        OpHelp(""),
    /* 148 */ "DropTrigger"      OpHelp(""),
    /* 149 */ "IntegrityCk"      OpHelp(""),
    /* 150 */ "RowSetAdd"        OpHelp("rowset(P1)=r[P2]"),
    /* 151 */ "Real"             OpHelp("r[P2]=P4"),
    /* 152 */ "Param"            OpHelp(""),
    /* 153 */ "FkCounter"        OpHelp("fkctr[P1]+=P2"),
    /* 154 */ "MemMax"           OpHelp("r[P1]=max(r[P1],r[P2])"),
    /* 155 */ "OffsetLimit"      OpHelp("if r[P1]>0 then r[P2]=r[P1]+max(0,r[P3]) else r[P2]=(-1)"),
    /* 156 */ "AggInverse"       OpHelp("accum=r[P3] inverse(r[P2@P5])"),
    /* 157 */ "AggStep"          OpHelp("accum=r[P3] step(r[P2@P5])"),
    /* 158 */ "AggStep1"         OpHelp("accum=r[P3] step(r[P2@P5])"),
    /* 159 */ "AggValue"         OpHelp("r[P3]=value N=P2"),
    /* 160 */ "AggFinal"         OpHelp("accum=r[P1] N=P2"),
    /* 161 */ "Expire"           OpHelp(""),
    /* 162 */ "CursorLock"       OpHelp(""),
    /* 163 */ "CursorUnlock"     OpHelp(""),
    /* 164 */ "TableLock"        OpHelp("iDb=P1 root=P2 write=P3"),
    /* 165 */ "VBegin"           OpHelp(""),
    /* 166 */ "VCreate"          OpHelp(""),
    /* 167 */ "VDestroy"         OpHelp(""),
    /* 168 */ "VOpen"            OpHelp(""),
    /* 169 */ "VColumn"          OpHelp("r[P3]=vcolumn(P2)"),
    /* 170 */ "VRename"          OpHelp(""),
    /* 171 */ "Pagecount"        OpHelp(""),
    /* 172 */ "MaxPgcnt"         OpHelp(""),
    /* 173 */ "Trace"            OpHelp(""),
    /* 174 */ "CursorHint"       OpHelp(""),
    /* 175 */ "ReleaseReg"       OpHelp("release r[P1@P2] mask P3"),
    /* 176 */ "Noop"             OpHelp(""),
    /* 177 */ "Explain"          OpHelp(""),
    /* 178 */ "Abortable"        OpHelp(""),
  };
  return azName[i];
}
#endif
