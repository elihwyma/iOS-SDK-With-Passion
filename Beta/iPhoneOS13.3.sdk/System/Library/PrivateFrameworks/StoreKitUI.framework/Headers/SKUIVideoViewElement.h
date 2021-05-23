/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIVideoViewElement : SKUIViewElement

{
    BOOL _enabled;
    long long _itemIdentifier;
    long long _playbackStyle;
    SKUIImageViewElement *_thumbnailImage;
    long long _kind;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) SKUIImageViewElement *thumbnailImage;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
