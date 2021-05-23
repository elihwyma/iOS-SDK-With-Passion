/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <VectorKit/VKLabelMarker.h>

@class MKMapItemIdentifier, NSString, UIView;

@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface VKLabelMarker (MapKitExtras)

@property (nonatomic, readonly) MKMapItemIdentifier *identifier;
@property (nonatomic, readonly) MKMapItemIdentifier *flyoverTourIdentifier;
@property (nonatomic) _Bool suppressCallout;
@property (nonatomic, readonly) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIView *leftCalloutAccessoryView;
@property (retain, nonatomic) UIView *rightCalloutAccessoryView;
@property (retain, nonatomic) UIView *detailCalloutAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> shieldDataSource;
@property (nonatomic, readonly) id <GEOTransitIconDataSource> iconDataSource;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (nonatomic, readonly) id <GEOTransitTextDataSource> textDataSource;
@property (nonatomic, readonly) _Bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) NSString *accessibilityText;

- (id)_annotationTitle;

@end
