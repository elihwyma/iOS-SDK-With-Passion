/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString, VSLinkedOnOrAfterChecker, VSPrivacyInfoCenter, VSSecurityTask, VSViewServiceRequestCenter;

@protocol VSAccountManagerDelegate;

@interface VSAccountManager : NSObject

{
    id <VSAccountManagerDelegate> _delegate;
    VSSecurityTask *_securityTask;
    VSPrivacyInfoCenter *_privacyInfoCenter;
    VSViewServiceRequestCenter *_requestCenter;
    VSLinkedOnOrAfterChecker *_linkedOnOrAfterChecker;
}

@property (retain, nonatomic) VSSecurityTask *securityTask;
@property (retain, nonatomic) VSPrivacyInfoCenter *privacyInfoCenter;
@property (retain, nonatomic) VSViewServiceRequestCenter *requestCenter;
@property (retain, nonatomic) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker;
@property (weak, nonatomic) id <VSAccountManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_enqueueViewServiceRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewServiceRequestOperation:(id)arg1 presentViewController:(id)arg2;
- (void)viewServiceRequestOperation:(id)arg1 dismissViewController:(id)arg2;
- (_Bool)viewServiceRequestOperation:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;
- (void)checkAccessStatusWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueAccountMetadataRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
