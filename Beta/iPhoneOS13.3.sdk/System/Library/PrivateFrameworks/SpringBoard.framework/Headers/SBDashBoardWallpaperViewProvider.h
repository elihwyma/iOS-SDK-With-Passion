/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBDashBoardWallpaperViewProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
- (id)createCoverSheetWallpaperView;
- (id)suspendWallpaperAnimationForReason:(id)arg1;
- (id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;

@end
