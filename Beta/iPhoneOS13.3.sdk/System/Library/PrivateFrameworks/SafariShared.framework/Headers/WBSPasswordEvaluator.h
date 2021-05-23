/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSPasswordPatternMatcher, WBSPasswordWordListCollection;

@interface WBSPasswordEvaluator : NSObject

{
    WBSPasswordWordListCollection *_passwordWordListCollection;
    WBSPasswordWordListCollection *_passcodeWordListCollection;
    WBSPasswordPatternMatcher *_patternMatcher;
}

+ (_Bool)passwordLooksLikeDigitOnlyPasscode:(id)arg1;
+ (id)standardPasswordEvaluator;

- (id)_initWithPasswordWordListCollection:(id)arg1 passcodeWordListCollection:(id)arg2;
- (id)evaluatePassword:(id)arg1;

@end
