/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntentResponse.h>

@class NSString;

@interface WFCombineTextIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *text;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
