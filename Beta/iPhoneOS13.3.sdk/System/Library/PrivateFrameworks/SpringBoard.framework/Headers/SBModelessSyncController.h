/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class ATConnection;

@interface SBModelessSyncController : NSObject

{
    _Bool _isAppSyncing;
    _Bool _isSyncing;
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    _Bool _restoringFromICloud;
    _Bool _isAutoSyncing;
    _Bool _isWirelessSyncing;
    ATConnection *_airTrafficConnection;
}

@property (nonatomic, readonly) _Bool isAppSyncing;
@property (nonatomic, readonly) _Bool isSyncing;
@property (nonatomic, readonly) _Bool isRestoringFromICloud;
@property (nonatomic, readonly) _Bool isAutoSyncing;
@property (nonatomic, readonly) _Bool isWirelessSyncing;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)beginMonitoring;
- (void)endMonitoring;
- (void)connectionWasInterrupted:(id)arg1;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)setIsSyncing:(_Bool)arg1;
- (void)gotLowBatteryWarning;
- (void)_appSyncStateChanged;
- (void)_beginObservingICloudRestoreStatus;
- (void)_endObservingICloudRestoreStatus;
- (void)_setAppSyncState:(_Bool)arg1;
- (void)_updateIconsForStateChange;
- (void)_iCloudStatusChanged;

@end
