/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface NTKUpNextStatusBarDynamicUnderlay : UICollectionReusableView

{
    UIView *_overlayView;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateBackgroundColor;

@end
