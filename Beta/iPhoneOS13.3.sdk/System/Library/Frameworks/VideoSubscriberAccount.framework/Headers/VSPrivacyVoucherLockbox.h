/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUndoManager, VSRemoteNotifier;

__attribute__((visibility("hidden")))
@interface VSPrivacyVoucherLockbox : NSObject

{
    NSUndoManager *_undoManager;
    VSRemoteNotifier *_remoteNotifier;
}

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (copy, nonatomic, readonly) NSArray *unredeemedVouchers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)redeemVoucher:(id)arg1;
- (void)removeAllVouchers;
- (void)issueVouchers:(id)arg1;
- (void)setUnredeemedVouchers:(id)arg1;
- (id)_voucherArchiveURL;
- (void)issueVouchersForAppsWithAdamIDs:(id)arg1 providerID:(id)arg2;

@end
