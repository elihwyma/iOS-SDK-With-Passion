/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, STManagementState;

@protocol OS_dispatch_queue;

@interface STManagementStateObserver : NSObject

{
    int _screenTimeSettingsChangeNotifyToken;
    long long _contactManagementState;
    NSNumber *_dsid;
    STManagementState *_managementState;
    STManagementStateObserver *_me;
    NSObject<OS_dispatch_queue> *_screenTimeSettingsChangeQueue;
}

@property (copy, readonly) NSNumber *dsid;
@property (retain) STManagementState *managementState;
@property long long contactManagementState;
@property (retain) STManagementStateObserver *me;
@property (readonly) NSObject<OS_dispatch_queue> *screenTimeSettingsChangeQueue;
@property (readonly) int screenTimeSettingsChangeNotifyToken;

+ (void)createObserverWithDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)_screenTimeSettingsDidChange;
- (id)_initWithDSID:(id)arg1;

@end
