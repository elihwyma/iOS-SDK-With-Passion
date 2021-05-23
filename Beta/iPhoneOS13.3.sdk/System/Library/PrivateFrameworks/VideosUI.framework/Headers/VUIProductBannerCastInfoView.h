/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUICastInfoLayout;

__attribute__((visibility("hidden")))
@interface VUIProductBannerCastInfoView : UIView

{
    VUICastInfoLayout *_layout;
    IKViewElement *_viewElement;
    NSArray *_labels;
}

@property (retain, nonatomic) VUICastInfoLayout *layout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) NSArray *labels;

+ (id)configureViewWithItems:(id)arg1 existingView:(id)arg2;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateTextColor;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end
