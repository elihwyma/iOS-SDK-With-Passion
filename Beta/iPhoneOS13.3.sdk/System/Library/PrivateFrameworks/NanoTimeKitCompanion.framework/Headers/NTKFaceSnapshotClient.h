/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotClient : NSObject

{
    NSXPCConnection *_connection;
    _Bool _registrationNeeded;
    NSObject<OS_dispatch_queue> *_snapshotFileQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_handleConnectionInterrupted;
- (void)_setupConnection;
- (void)snapshotFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_registerIfNeeded;
- (void)_handleCustomMonogramChangedNotification;
- (void)_handleSignificantLocationChangeNotification;
- (void)_handleActiveDeviceChangedNotification;
- (void)_updateAllSnapshots;
- (void)createFaceForPerformanceTesting:(long long)arg1;
- (void)requestSnapshotOfFace:(id)arg1;
- (void)performAfterCompletingCurrentlyPendingSnapshots:(CDUnknownBlockType)arg1;
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)synchronouslyUpdateAllSnapshots;
- (void)faceSnapshotChangedForKey:(id)arg1;

@end
