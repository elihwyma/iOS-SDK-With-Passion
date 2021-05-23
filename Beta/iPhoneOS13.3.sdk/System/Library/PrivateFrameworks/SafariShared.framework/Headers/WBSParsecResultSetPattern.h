/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSRegularExpression;

@interface WBSParsecResultSetPattern : NSObject

{
    NSRegularExpression *_regularExpression;
}

+ (id)_regularExpressionPatternForToken:(id)arg1;
+ (id)_nextTokenInResultSetPattern:(id)arg1;
+ (id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1;
+ (id)_regularExpressionPatternFromResultSetPattern:(id)arg1;
+ (id)patternWithString:(id)arg1;

- (id)_initWithRegularExpression:(id)arg1;
- (_Bool)isMatchedByString:(id)arg1;

@end
