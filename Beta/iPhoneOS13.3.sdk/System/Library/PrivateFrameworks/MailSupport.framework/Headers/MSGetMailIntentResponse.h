/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface MSGetMailIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *mails;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
