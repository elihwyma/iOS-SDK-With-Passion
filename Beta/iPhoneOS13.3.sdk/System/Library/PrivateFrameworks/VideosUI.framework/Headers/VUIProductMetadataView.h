/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUIProductInfoAiringView, VUIProductMetadataLayout, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUIProductMetadataView : UIView

{
    NSArray *_sectionViews;
    VUIProductMetadataLayout *_viewLayout;
    UIView *_defaultFocusView;
    VUIProductInfoAiringView *_airingView;
    VUISeparatorView *_separatorView;
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) VUIProductMetadataLayout *viewLayout;
@property (retain, nonatomic) UIView *defaultFocusView;
@property (retain, nonatomic) VUIProductInfoAiringView *airingView;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) IKViewElement *viewElement;

+ (id)configureViewWithElement:(id)arg1 existingView:(id)arg2;

- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_generateSectionViewFromElement:(id)arg1;
- (void)updateViewWithSections:(id)arg1;

@end
