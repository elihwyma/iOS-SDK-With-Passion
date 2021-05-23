/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUILink;

@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUICarouselItem : NSObject

{
    NSString *_accessibilityLabel;
    long long _carouselItemIdentifier;
    SKUILink *_link;
    id <SKUIArtworkProviding> _artworkProvider;
}

@property (retain, nonatomic) id <SKUIArtworkProviding> artworkProvider;
@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) long long carouselItemIdentifier;
@property (nonatomic, readonly) SKUILink *link;

- (id)description;
- (id)artworkForSize:(struct CGSize)arg1;
- (void)_setLinkItem:(id)arg1;
- (id)initWithComponentContext:(id)arg1;

@end
