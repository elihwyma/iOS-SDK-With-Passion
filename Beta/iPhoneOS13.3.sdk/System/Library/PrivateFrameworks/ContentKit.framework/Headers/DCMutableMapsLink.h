/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/DCMapsLink.h>

@class NSString;

@interface DCMutableMapsLink : DCMapsLink

{
    NSString *_searchQuery;
    NSString *_searchNearQuery;
    NSString *_searchLocation;
    NSString *_startAddress;
    NSString *_destinationAddress;
    unsigned long long _directionsMode;
    NSString *_centerLocation;
    long long _zoomLevel;
    unsigned long long _mapType;
    _Bool _showsTraffic;
    _Bool _showsTransit;
    _Bool _showsStreetView;
    _Bool _showsBicycling;
    NSString *_streetViewLocation;
}

@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *searchNearQuery;
@property (copy, nonatomic) NSString *searchLocation;
@property (copy, nonatomic) NSString *startAddress;
@property (copy, nonatomic) NSString *destinationAddress;
@property (nonatomic) unsigned long long directionsMode;
@property (copy, nonatomic) NSString *centerLocation;
@property (nonatomic) long long zoomLevel;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic) _Bool showsTraffic;
@property (nonatomic) _Bool showsTransit;
@property (nonatomic) _Bool showsStreetView;
@property (nonatomic) _Bool showsBicycling;
@property (copy, nonatomic) NSString *streetViewLocation;

@end
