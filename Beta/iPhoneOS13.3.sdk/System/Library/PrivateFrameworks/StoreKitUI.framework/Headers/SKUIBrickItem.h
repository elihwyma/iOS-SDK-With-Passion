/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIArtwork, SKUICountdown, SKUIEditorialComponent, SKUILink;

@interface SKUIBrickItem : NSObject

{
    NSString *_accessibilityLabel;
    SKUIArtwork *_artwork;
    long long _brickIdentifier;
    SKUICountdown *_countdown;
    SKUIEditorialComponent *_editorial;
    SKUILink *_link;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) SKUIArtwork *artwork;
@property (nonatomic, readonly) long long brickIdentifier;
@property (nonatomic, readonly) SKUICountdown *countdown;
@property (nonatomic, readonly) SKUIEditorialComponent *editorial;
@property (nonatomic, readonly) SKUILink *link;

- (id)description;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithBannerRoomContext:(id)arg1;
- (void)_setLinkItem:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2;

@end
