/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntentResponse.h>

@interface WFSetAppearanceIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
