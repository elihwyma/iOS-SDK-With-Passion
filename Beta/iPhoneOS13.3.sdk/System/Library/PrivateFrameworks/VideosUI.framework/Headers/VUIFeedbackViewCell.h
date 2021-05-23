/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, VUIFeedbackView;

__attribute__((visibility("hidden")))
@interface VUIFeedbackViewCell : VUIFocusableCollectionViewCell

{
    IKViewElement *_viewElement;
    VUIFeedbackView *_cardView;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIFeedbackView *cardView;

+ (id)configureViewWithElement:(id)arg1 existingCell:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setupElements:(id)arg1 inCardView:(id)arg2;

@end
