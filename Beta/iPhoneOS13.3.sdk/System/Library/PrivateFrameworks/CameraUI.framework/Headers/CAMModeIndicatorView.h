/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class CAMModeDialItem, UIImageView;

@interface CAMModeIndicatorView : UIControl

{
    long long _selectedMode;
    CAMModeDialItem *__modeTextView;
    UIImageView *__symbolView;
}

@property (nonatomic, readonly) CAMModeDialItem *_modeTextView;
@property (nonatomic, readonly) UIImageView *_symbolView;
@property (nonatomic) long long selectedMode;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)_symbolSize;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateModeIndicatorAnimated:(_Bool)arg1;

@end
