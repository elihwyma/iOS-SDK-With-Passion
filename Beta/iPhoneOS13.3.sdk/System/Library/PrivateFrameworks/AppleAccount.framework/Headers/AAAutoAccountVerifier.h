/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class ACAccount, MSSearch, NSOperationQueue, NSString;

@interface AAAutoAccountVerifier : NSObject

{
    MSSearch *_search;
    NSOperationQueue *_requesterQueue;
    ACAccount *_account;
    CDUnknownBlockType _handler;
    int _attempts;
    _Bool _canceled;
}

@property (retain, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (id)initWithAccount:(id)arg1;
- (void)_resendVerificationEmailForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_verify;
- (void)_validateToken:(id)arg1;
- (_Bool)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:(CDUnknownBlockType)arg1;

@end
