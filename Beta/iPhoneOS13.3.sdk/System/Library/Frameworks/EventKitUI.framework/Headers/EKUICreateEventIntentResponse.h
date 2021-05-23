/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Intents/INIntentResponse.h>

@interface EKUICreateEventIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
