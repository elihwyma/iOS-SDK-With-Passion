/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView

{
    _Bool _hasImage;
    id _surface;
}

@property (weak, nonatomic, readonly) id surface;

- (id)_initWithFrame:(struct CGRect)arg1;
- (void)_addBlackBackground;
- (id)_initWithView:(id)arg1 displayConfiguration:(id)arg2;
- (id)initWithContainingBounds:(struct CGRect)arg1 contentFrame:(struct CGRect)arg2 statusBarFrame:(struct CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(_Bool)arg7 preventSplit:(_Bool)arg8 needsZoomFilter:(_Bool)arg9 asyncDecodeImage:(_Bool)arg10 forJail:(_Bool)arg11;
- (id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3;

@end
