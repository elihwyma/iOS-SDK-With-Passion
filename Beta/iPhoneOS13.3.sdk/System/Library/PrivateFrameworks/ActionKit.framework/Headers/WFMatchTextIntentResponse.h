/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntentResponse.h>

@class NSArray, NSString;

@interface WFMatchTextIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *matches;
@property (copy, nonatomic) NSString *errorDescription;

+ (id)invalidRegularExpressionIntentResponseWithErrorDescription:(id)arg1;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
