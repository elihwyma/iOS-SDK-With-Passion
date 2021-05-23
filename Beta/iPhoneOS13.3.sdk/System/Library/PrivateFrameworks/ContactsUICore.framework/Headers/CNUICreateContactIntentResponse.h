/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <INIntentResponse.h>

@interface CNUICreateContactIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
