/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSDownloadAuthenticationSession;

@protocol OS_dispatch_queue;

@interface SSDownloadAuthenticationChallengeSender : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadAuthenticationSession *_session;
}

@property (readonly) SSDownloadAuthenticationSession *authenticationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (id)initWithAuthenticationSession:(id)arg1;

@end
