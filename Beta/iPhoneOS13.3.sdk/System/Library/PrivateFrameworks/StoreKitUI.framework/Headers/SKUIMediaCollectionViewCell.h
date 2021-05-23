/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class SKUIEmbeddedMediaView;

__attribute__((visibility("hidden")))
@interface SKUIMediaCollectionViewCell : SKUICollectionViewCell

{
    struct UIEdgeInsets _contentInset;
    SKUIEmbeddedMediaView *_mediaView;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) SKUIEmbeddedMediaView *mediaView;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;

@end
