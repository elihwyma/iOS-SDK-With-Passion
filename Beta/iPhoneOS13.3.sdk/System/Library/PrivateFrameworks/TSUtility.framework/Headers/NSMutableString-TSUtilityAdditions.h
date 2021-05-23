/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSMutableString.h>

@interface NSMutableString (TSUtilityAdditions)

- (void)tsu_appendCharacter:(unsigned short)arg1;
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;
- (void)tsu_indentBy:(unsigned long long)arg1;

@end
