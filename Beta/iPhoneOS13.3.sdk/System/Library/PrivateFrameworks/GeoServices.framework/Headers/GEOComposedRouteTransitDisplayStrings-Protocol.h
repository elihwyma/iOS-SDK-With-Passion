/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray;

@protocol GEOServerFormattedString;

@protocol GEOComposedRouteTransitDisplayStrings <Swift>

@property (nonatomic, readonly) id <GEOServerFormattedString> previewDurationFormatString;
@property (nonatomic, readonly) id <GEOServerFormattedString> pickingDurationFormatString;
@property (nonatomic, readonly) id <GEOServerFormattedString> planningDescriptionFormatString;
@property (nonatomic, readonly) id <GEOServerFormattedString> transitDescriptionFormatString;
@property (nonatomic, readonly) NSArray *transitAdvisories;
@property (nonatomic, readonly) id <GEOServerFormattedString> transitRouteBadge;

@end
