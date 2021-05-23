/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewSection.h>

@class SKUIGiftConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIGiftTableViewSection : SKUITableViewSection

{
    SKUIGiftConfiguration *_giftConfiguration;
}

@property (nonatomic, readonly) SKUIGiftConfiguration *giftConfiguration;

+ (id)aloneRowBackgroundImageWithSize:(struct CGSize)arg1;

- (id)initWithGiftConfiguration:(id)arg1;

@end
