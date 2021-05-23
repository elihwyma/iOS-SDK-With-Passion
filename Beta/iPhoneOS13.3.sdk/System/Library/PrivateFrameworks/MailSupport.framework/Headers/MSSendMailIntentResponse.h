/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Intents/INIntentResponse.h>

@interface MSSendMailIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
