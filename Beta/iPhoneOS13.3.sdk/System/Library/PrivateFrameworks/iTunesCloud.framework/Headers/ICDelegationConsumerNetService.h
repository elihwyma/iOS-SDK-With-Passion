/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegationServiceSecuritySettings, NSDictionary, NSNetService, NSString;

@protocol ICDelegationConsumerNetServiceDelegate, OS_dispatch_queue;

@interface ICDelegationConsumerNetService : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _didPublish;
    _Bool _isPublished;
    NSNetService *_netService;
    NSObject<OS_dispatch_queue> *_netServiceQueue;
    ICDelegationServiceSecuritySettings *_securitySettings;
    id <ICDelegationConsumerNetServiceDelegate> _delegate;
    NSDictionary *_userIdentityDelegationAccountUUIDs;
}

@property (weak, nonatomic) id <ICDelegationConsumerNetServiceDelegate> delegate;
@property (copy, nonatomic, readonly) NSDictionary *userIdentityDelegationAccountUUIDs;
@property (nonatomic, readonly) ICDelegationServiceSecuritySettings *securitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)publish;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netServiceDidPublish:(id)arg1;
- (void)_updateNetServiceStatus;
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1;

@end
