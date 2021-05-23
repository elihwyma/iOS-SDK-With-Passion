/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, VUILabel, VUIProductMetadataLayout;

__attribute__((visibility("hidden")))
@interface VUIProductSectionView : UIView

{
    VUIProductMetadataLayout *_layout;
    VUILabel *_headerView;
    NSArray *_infoViews;
    UIView *_footerView;
    UIView *_defaultFocusView;
    VUILabel *_prototypeInfoHeaderLabel;
}

@property (retain, nonatomic) UIView *defaultFocusView;
@property (retain, nonatomic) VUILabel *prototypeInfoHeaderLabel;
@property (retain, nonatomic) VUIProductMetadataLayout *layout;
@property (retain, nonatomic) VUILabel *headerView;
@property (retain, nonatomic) NSArray *infoViews;
@property (retain, nonatomic) UIView *footerView;

+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)footerLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)footerDescriptionWithString:(id)arg1 layout:(id)arg2 maxLine:(unsigned long long)arg3 existingView:(id)arg4;

- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
