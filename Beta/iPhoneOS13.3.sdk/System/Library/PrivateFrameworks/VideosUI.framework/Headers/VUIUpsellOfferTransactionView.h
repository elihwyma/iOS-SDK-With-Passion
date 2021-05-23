/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUILabel, VUIUpsellOfferTransactionViewLayout;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferTransactionView : UIView

{
    IKViewElement *_viewElement;
    VUIUpsellOfferTransactionViewLayout *_layout;
    VUILabel *_disclaimerLabel;
    NSArray *_buttons;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIUpsellOfferTransactionViewLayout *layout;
@property (retain, nonatomic) VUILabel *disclaimerLabel;
@property (retain, nonatomic) NSArray *buttons;

+ (id)transactionViewFromElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;

@end
