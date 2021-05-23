/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface MKMuninContainerBadgeView : UIView

{
    UIVisualEffectView *_backgroundView;
    UIImageView *_glyphView;
    UILabel *_label;
}

@property (weak, nonatomic) UIVisualEffectView *backgroundView;
@property (weak, nonatomic) UIImageView *glyphView;
@property (weak, nonatomic) UILabel *label;

- (_Bool)isHidden;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;

@end
