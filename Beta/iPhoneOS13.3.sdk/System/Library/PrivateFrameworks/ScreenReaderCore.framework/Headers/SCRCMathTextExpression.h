/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTextExpression : SCRCMathSimpleExpression

- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)latexDescriptionInMathMode:(_Bool)arg1;

@end
