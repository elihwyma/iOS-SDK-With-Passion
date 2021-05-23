/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class SiriUISashItem, SiriUITextContainerView, UIImageView;

@interface SiriUISashView : UIView

{
    UIView *_contentView;
    UIImageView *_imageView;
    SiriUITextContainerView *_textContainerView;
    SiriUISashItem *_sashItem;
}

@property (nonatomic, readonly) SiriUISashItem *sashItem;

+ (id)_font;
+ (CDStruct_c3b3c0f9)_textContainerStyleForSashItem:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSashItem:(id)arg1 locale:(id)arg2;

@end
