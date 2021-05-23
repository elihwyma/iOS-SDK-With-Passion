/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSURLSession, NSDictionary, NSString;

@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSBiometricsTokenUpdateTask : AMSTask <Swift>

{
    _Bool _shouldRequestConfirmation;
    _Bool _shouldPromptUser;
    ACAccount *_account;
    NSDictionary *_additionalDialogMetrics;
    AMSProcessInfo *_clientInfo;
    id <AMSRequestPresentationDelegate> _presentationDelegate;
    id <AMSBagProtocol> _bag;
    AMSURLSession *_session;
}

@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (retain, nonatomic) AMSURLSession *session;
@property (nonatomic) _Bool shouldPromptUser;
@property (nonatomic, readonly) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalDialogMetrics;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (weak, nonatomic) id <AMSRequestPresentationDelegate> presentationDelegate;
@property (nonatomic) _Bool shouldRequestConfirmation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;

- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (void)handleAuthenticateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_sendRequestToDaemon;
- (id)performUpdate;

@end
