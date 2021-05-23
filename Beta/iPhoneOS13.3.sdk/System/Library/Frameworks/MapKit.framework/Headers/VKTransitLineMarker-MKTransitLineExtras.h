/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <VectorKit/VKTransitLineMarker.h>

@class NSString;

@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface VKTransitLineMarker (MKTransitLineExtras)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> shieldDataSource;
@property (nonatomic, readonly) id <GEOTransitIconDataSource> iconDataSource;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (nonatomic, readonly) id <GEOTransitTextDataSource> textDataSource;
@property (nonatomic, readonly) _Bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) NSString *accessibilityText;

- (id)artwork;
- (id)mapItemIdentifier;

@end
