/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSMutableString.h>

@interface NSMutableString (OITSUDescription)

- (void)tsu_appendCharacter:(unsigned short)arg1;
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;
- (void)tsu_indentBy:(unsigned long long)arg1;
- (_Bool)tc_replaceSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange)arg3;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3 range:(struct _NSRange)arg4;
- (_Bool)tc_replaceSubstr:(id)arg1 with:(id)arg2;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange)arg3;

@end
