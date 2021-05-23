/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class IKViewElement, VUIButton;

__attribute__((visibility("hidden")))
@interface VUICollectionFooterView : UICollectionReusableView

{
    IKViewElement *_viewElement;
    IKViewElement *_buttonViewElement;
    VUIButton *_buttonView;
    struct UIEdgeInsets _padding;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKViewElement *buttonViewElement;
@property (retain, nonatomic) VUIButton *buttonView;
@property (nonatomic) struct UIEdgeInsets padding;

+ (id)configureCollectionFooterViewWithElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;

@end
