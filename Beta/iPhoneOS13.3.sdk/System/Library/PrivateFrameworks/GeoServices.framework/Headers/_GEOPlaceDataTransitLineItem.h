/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemIdentifier, GEOMapRegion, NSArray, NSString;

@protocol GEOEncyclopedicInfo, GEOMapItemTransitInfo, GEOTransitArtworkDataSource, GEOTransitAttribution, GEOTransitLine, GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataTransitLineItem : NSObject

{
    id <GEOTransitAttribution> _attribution;
    id <GEOTransitLine> _line;
    id <GEOMapItemTransitInfo> _transitInfo;
    GEOMapRegion *_mapRegion;
    _Bool _hasEncyclopedicInfo;
    id <GEOEncyclopedicInfo> _encyclopedicInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) id <GEOTransitSystem> system;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) _Bool departuresAreVehicleSpecific;
@property (nonatomic, readonly) _Bool isBus;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artwork;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> modeArtwork;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> alternateArtwork;
@property (nonatomic, readonly) _Bool hasLineColorString;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) _Bool showVehicleNumber;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) id <GEOTransitAttribution> attribution;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) _Bool isIncidentsTTLExpired;
@property (nonatomic, readonly) _Bool hasIncidentComponent;
@property (nonatomic, readonly) _Bool hasEncyclopedicInfo;
@property (nonatomic, readonly) id <GEOEncyclopedicInfo> encyclopedicInfo;

- (id)initWithMapItem:(id)arg1;

@end
