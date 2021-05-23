/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class NSString;

@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@protocol GEOTransitArtworkDataSource <Swift>

@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> shieldDataSource;
@property (nonatomic, readonly) id <GEOTransitIconDataSource> iconDataSource;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (nonatomic, readonly) id <GEOTransitTextDataSource> textDataSource;
@property (nonatomic, readonly) _Bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) NSString *accessibilityText;

@end
