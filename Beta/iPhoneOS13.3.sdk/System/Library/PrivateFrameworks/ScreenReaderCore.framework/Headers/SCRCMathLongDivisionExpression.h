/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression

{
    SCRCMathExpression *_divisor;
}

@property (retain, nonatomic) SCRCMathExpression *divisor;

- (id)initWithDictionary:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;

@end
