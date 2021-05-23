/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKDelayedBlock, NTKFaceSnapshottingWindow;

@interface NTKFaceSnapshotter : NSObject

{
    NTKFaceSnapshottingWindow *_snapshotWindow;
    NTKDelayedBlock *_hideSnapshotWindowBlock;
}

+ (id)defaultModernSnapshotOptions;
+ (id)renderSnapshotFromWindow:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_mainQueue_takeSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)viewControllerForFace:(id)arg1 withOptions:(id)arg2;
- (void)_showSnapshotWindowForDevice:(id)arg1;
- (void)_hideSnapshotWindow;
- (void)provideSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
