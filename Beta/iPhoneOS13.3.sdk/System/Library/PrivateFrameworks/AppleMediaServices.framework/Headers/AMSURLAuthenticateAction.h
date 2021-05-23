/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSURLAction.h>

@class ACAccount;

__attribute__((visibility("hidden")))
@interface AMSURLAuthenticateAction : AMSURLAction

{
    ACAccount *_updatedAccount;
}

@property (retain, nonatomic) ACAccount *updatedAccount;

@end
