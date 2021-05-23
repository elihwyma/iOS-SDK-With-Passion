/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBFolderView, SBIconLayoutOverrideStrategy, UIView;

@interface SBFolderContainerView : SBFTouchPassThroughView

{
    double _statusBarHeight;
    SBIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
    SBFolderView *_folderView;
    SBFolderContainerView *_childFolderContainerView;
    UIView *_backgroundView;
}

@property (nonatomic, readonly) SBFolderView *folderView;
@property (retain, nonatomic) SBFolderContainerView *childFolderContainerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) SBIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFolderView:(id)arg1 statusBarHeight:(double)arg2;
- (struct CGRect)_frameForFolderView:(id)arg1;

@end
