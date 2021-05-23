/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (FezAdditions)

- (void)replaceNewlinesWithSpaces;
- (void)trimWhitespace;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)removeCharactersWithAttribute:(id)arg1;

@end
