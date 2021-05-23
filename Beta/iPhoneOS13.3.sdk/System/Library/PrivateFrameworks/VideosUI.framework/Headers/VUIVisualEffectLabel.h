/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIVisualEffectView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIVisualEffectLabel : UIView

{
    UIVisualEffectView *_visualEffectView;
    VUILabel *_label;
}

@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) VUILabel *label;

+ (id)vibrantLabelWithLabel:(id)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithEffect:(id)arg1;
- (void)layoutSubviews;
- (void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2;

@end
