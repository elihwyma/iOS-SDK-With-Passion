/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapRegion, NSArray;

@protocol GEOEncyclopedicInfo, GEOTransitAttribution;

@protocol GEOTransitLineItem <Swift>

@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) id <GEOTransitAttribution> attribution;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) _Bool isIncidentsTTLExpired;
@property (nonatomic, readonly) _Bool hasIncidentComponent;
@property (nonatomic, readonly) _Bool hasEncyclopedicInfo;
@property (nonatomic, readonly) id <GEOEncyclopedicInfo> encyclopedicInfo;

@end
