/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@protocol NTKFaceSnapshotServer <Swift>

- (unsigned short)snapshotFace:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createFaceForPerformanceTesting: /* Error: Ran out of types for this method. */;
- (unsigned short)requestSnapshotOfFace: /* Error: Ran out of types for this method. */;
- (unsigned short)performAfterCompletingCurrentlyPendingSnapshots: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotLibrarySelectedFaceForDeviceUUID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAllSnapshots;
- (unsigned short)registerForUpdates;

@end
