/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSRegularExpression.h>

@interface NSRegularExpression (ENAGRegex)

+ (id)enRegexWithPattern:(id)arg1;

- (_Bool)enFindInString:(id)arg1;
- (_Bool)enMatchesString:(id)arg1;
- (id)enCapturedSubstringsOfString:(id)arg1;
- (id)enReplaceWithString:(id)arg1 inString:(id)arg2;

@end
