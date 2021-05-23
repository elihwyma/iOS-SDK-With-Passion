/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSString.h>

@interface NSString (PCAdditions)

- (unsigned long long)glyphCount;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingWhitespace;
- (_Bool)isNewline;
- (unsigned long long)composedCharacterCount;
- (unsigned long long)UTF32CharacterCount;
- (_Bool)isAllWhitespace;
- (_Bool)isAllWhitespaceAndNewline;

@end
