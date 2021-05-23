/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBBiometricMonitorViewController, UIWindow;

@protocol SBBiometricMonitorDataSource;

@interface SBBiometricMonitorUI : NSObject

{
    _Bool _enabled;
    UIWindow *_debugWindow;
    SBBiometricMonitorViewController *_debugViewController;
    _Bool _deferredMatchUpdatePending;
    _Bool _deferredPresenceDetectUpdatePending;
    id <SBBiometricMonitorDataSource> _dataSource;
}

@property (retain, nonatomic) id <SBBiometricMonitorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)disable;
- (void)enable;
- (void)_updateMatchState;
- (void)_updatePresenceDetectState;
- (void)_cancelDeferredUpdateMatchState;
- (void)_doDeferredMatchStateUpdate;
- (void)_doDeferredPresenceDetectUpdate;
- (void)_deferredUpdateMatchState;
- (_Bool)_isDeferredMatchStateUpdatePending;
- (_Bool)_isDeferredPresenceDetectStateUpdatePending;
- (void)_cancelDeferredUpdatePresenceDetectState;
- (void)_deferredUpdatePresenceDetectState;
- (void)biometricMonitorDataSourceMatchingStarted:(id)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;
- (void)biometricMonitorDataSourceMatchingEnded:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;
- (void)biometricMonitorDataSourcePoseUpdated:(id)arg1;

@end
