/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntentResponse.h>

@class WFAskForInputResult;

@interface WFAskForInputIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) WFAskForInputResult *result;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
