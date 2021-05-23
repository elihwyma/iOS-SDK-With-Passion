/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WFCameraFlashButton : UIControl

{
    _Bool _expanded;
    _Bool _needsHiding;
    NSArray *_labels;
    UILabel *_selectedLabel;
    UIImageView *_flashView;
}

@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (weak, nonatomic) UIImageView *flashView;
@property (nonatomic) _Bool expanded;
@property (nonatomic) _Bool needsHiding;
@property (nonatomic) long long flashMode;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end
