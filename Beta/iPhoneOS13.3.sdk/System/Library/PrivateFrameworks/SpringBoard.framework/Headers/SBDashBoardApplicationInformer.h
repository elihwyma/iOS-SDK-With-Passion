/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface SBDashBoardApplicationInformer : NSObject

{
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeApplicationInformationObserver:(id)arg1;
- (void)addApplicationInformationObserver:(id)arg1;
- (_Bool)isBundleIdentifierClock:(id)arg1;
- (_Bool)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (void)_installedApplicationsDidChange:(id)arg1;
- (void)_screenTimeNotificationPolicyDidChange:(id)arg1;
- (_Bool)isBundleIdentifierWallet:(id)arg1;

@end
