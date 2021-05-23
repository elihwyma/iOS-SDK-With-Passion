/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class SBFolderBackgroundView;

@interface SBFloatyFolderBackgroundClipView : UIView

{
    SBFolderBackgroundView *_backgroundView;
}

@property (nonatomic, readonly) SBFolderBackgroundView *backgroundView;
@property (nonatomic) unsigned long long backgroundEffect;
@property (nonatomic) double cornerRadius;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
