/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathNumberExpression : SCRCMathSimpleExpression

- (_Bool)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;

@end
