/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ACDAuthenticationDialogRequest : NSObject

{
    _Bool _confirmationRequired;
    NSURL *_url;
    ACAccount *_account;
    NSString *_authDelegateClassName;
    NSString *_authDelegateClassBundlePath;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) NSURL *url;
@property (nonatomic) _Bool confirmationRequired;
@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authDelegateClassName;
@property (copy, nonatomic) NSString *authDelegateClassBundlePath;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
