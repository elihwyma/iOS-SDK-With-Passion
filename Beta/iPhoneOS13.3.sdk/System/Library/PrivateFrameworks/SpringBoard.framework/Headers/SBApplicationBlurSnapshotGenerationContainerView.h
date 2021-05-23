/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface SBApplicationBlurSnapshotGenerationContainerView : UIView

{
    UIView *_wallpaperView;
    UIView *_realSnapshotView;
    UIView *_liveBlurView;
}

@property (retain, nonatomic) UIView *wallpaperView;
@property (retain, nonatomic) UIView *realSnapshotView;
@property (retain, nonatomic) UIView *liveBlurView;

- (void)layoutSubviews;

@end
