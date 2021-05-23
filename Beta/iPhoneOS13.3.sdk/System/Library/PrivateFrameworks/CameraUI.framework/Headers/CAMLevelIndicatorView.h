/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMLevelCrosshair, CAMLevelViewModel, NSString;

@interface CAMLevelIndicatorView : UIView

{
    CAMLevelViewModel *_viewModel;
    CAMLevelCrosshair *__goalCrosshair;
    CAMLevelCrosshair *__userCrosshair;
}

@property (nonatomic, readonly) CAMLevelCrosshair *_goalCrosshair;
@property (nonatomic, readonly) CAMLevelCrosshair *_userCrosshair;
@property (nonatomic, readonly) CAMLevelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;
- (void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)arg1;
- (void)_updateCrosshairAlphasWithAlpha:(double)arg1 indicatorMode:(long long)arg2;
- (void)_updateCrosshairHighlightWithOffset:(struct UIOffset)arg1;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void *)arg3;

@end
