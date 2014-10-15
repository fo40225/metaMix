#for k in `cat removeID.tab`; do #
#
#   sed  "/${k}/d" blastOut.tab > blastOut_nomouse.tab #
#
#done

grep -vFf  removeID.tab blastOut.tab > blastOut_nomouse.tab 

