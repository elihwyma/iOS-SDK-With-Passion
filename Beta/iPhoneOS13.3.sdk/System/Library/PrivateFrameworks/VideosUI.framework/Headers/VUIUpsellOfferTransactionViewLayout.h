/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout

{
    VUITextLayout *_disclaimerTextLayout;
    VUIButtonLayout *_buttonLayout;
}

@property (nonatomic, readonly) VUITextLayout *disclaimerTextLayout;
@property (nonatomic, readonly) VUIButtonLayout *buttonLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;
- (double)buttonHeight;
- (double)buttonSpacing;
- (void)_configureLayout;
- (struct UIEdgeInsets)safeAreaInsetsPhone;
- (struct UIEdgeInsets)safeAreaInsetsPad;
- (double)disclaimerBottomMargin;

@end
