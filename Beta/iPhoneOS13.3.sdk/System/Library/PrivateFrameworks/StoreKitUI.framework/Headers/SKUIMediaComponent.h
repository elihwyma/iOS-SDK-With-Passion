/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUILink;

@protocol SKUIArtworkProviding;

@interface SKUIMediaComponent : SKUIPageComponent

{
    NSString *_accessibilityLabel;
    long long _alignment;
    double _duration;
    SKUILink *_link;
    long long _mediaAppearance;
    long long _mediaIdentifier;
    long long _mediaType;
    NSString *_mediaURLString;
    NSString *_title;
    float _titleFontSize;
    long long _titleFontWeight;
    id <SKUIArtworkProviding> _thumbnailArtworkProvider;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) SKUILink *link;
@property (nonatomic, readonly) long long mediaIdentifier;
@property (nonatomic, readonly) long long mediaAppearance;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSString *mediaURLString;
@property (nonatomic, readonly) id <SKUIArtworkProviding> thumbnailArtworkProvider;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) float titleFontSize;
@property (nonatomic, readonly) long long titleFontWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)componentType;
- (id)valueForMetricsField:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)metricsElementName;
- (id)initWithArtworkProvider:(id)arg1 appearance:(long long)arg2;
- (id)bestThumbnailForWidth:(double)arg1;
- (id)bestThumbnailArtwork;
- (id)initWithArtwork:(id)arg1;
- (id)initWithArtworkProvider:(id)arg1;

@end
