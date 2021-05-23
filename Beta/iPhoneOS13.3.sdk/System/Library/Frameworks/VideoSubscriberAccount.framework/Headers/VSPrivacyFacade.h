/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperationQueue, NSString, VSPrivacyVoucherLockbox;

@interface VSPrivacyFacade : NSObject

{
    VSPrivacyVoucherLockbox *_voucherLockbox;
    NSString *_service;
    NSOperationQueue *_privateQueue;
}

@property (retain, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic, readonly) NSArray *knownAppBundles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)reset;
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestAccessForAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(_Bool)arg4 identityProviderID:(id)arg5 allowUI:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 voucherLockbox:(id)arg2;
- (id)_voucherForProcess:(int)arg1 providerID:(id)arg2;
- (_Bool)setAccessGranted:(_Bool)arg1 forAuditToken:(CDStruct_4c969caf)arg2;
- (void)_promptForAccessUsingAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithVoucherLockbox:(id)arg1;
- (_Bool)isAccessGrantedForAuditToken:(CDStruct_4c969caf)arg1;
- (_Bool)isAccessGrantedForBundle:(struct __CFBundle *)arg1;
- (_Bool)setAccessGranted:(_Bool)arg1 forBundle:(struct __CFBundle *)arg2;

@end
