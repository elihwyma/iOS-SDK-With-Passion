/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class VUIErrorLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIErrorView : UIView

{
    VUIErrorLayout *_layout;
    VUILabel *_titleLabel;
    VUILabel *_descriptionLabel;
    VUILabel *_debugTextLabel;
    VUILabel *_debugTextLabel2;
}

@property (retain, nonatomic) VUIErrorLayout *layout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *descriptionLabel;
@property (retain, nonatomic) VUILabel *debugTextLabel;
@property (retain, nonatomic) VUILabel *debugTextLabel2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end
