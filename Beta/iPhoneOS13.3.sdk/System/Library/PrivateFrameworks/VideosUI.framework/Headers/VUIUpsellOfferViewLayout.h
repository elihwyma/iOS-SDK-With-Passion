/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferViewLayout : TVViewLayout

{
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_descriptionTextLayout;
    TVImageLayout *_imageLayout;
}

@property (nonatomic, readonly) VUITextLayout *titleTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) TVImageLayout *imageLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;
- (struct UIEdgeInsets)safeAreaInsets;
- (double)titleTopMarginPhone;
- (double)titleTopMarginPad;
- (double)descriptionTopMargin;
- (void)_configureLayout;

@end
