/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXBasicTileAnimator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareTile:(id)arg1 withGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3;
- (void)animateTile:(id)arg1 toGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3 withOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)suspendAnimationsForTile:(id)arg1;
- (void)resumeAnimationsForTile:(id)arg1;

@end
