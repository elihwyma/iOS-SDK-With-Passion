/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface OKUILabelHUDView : UIView

{
    UILabel *_label;
}

@property (retain, readonly) UILabel *label;

- (id)init;
- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)updateShadowPath;

@end
