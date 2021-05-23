/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSAuthenticationBulletinOperation, VSIdentityProvider;

@interface VSStoreAuthenticationNotificationOperation : VSAsyncOperation

{
    VSIdentityProvider *_identityProvider;
    NSURL *_logoCacheURL;
    VSAuthenticationBulletinOperation *_authenticationBulletinOperation;
}

@property (retain, nonatomic) VSAuthenticationBulletinOperation *authenticationBulletinOperation;
@property (copy, nonatomic, readonly) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSURL *logoCacheURL;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)arg1;

@end
