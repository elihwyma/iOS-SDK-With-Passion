/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface WFChangeCaseIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *text;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
