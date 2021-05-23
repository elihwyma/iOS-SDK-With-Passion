/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSMutableArray;

@protocol GEOCompanionManeuverStep <Swift>

@property (nonatomic) _Bool hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (nonatomic) _Bool hasJunctionType;
@property (nonatomic) int junctionType;
@property (nonatomic, readonly) unsigned long long junctionElementsCount;
@property (nonatomic, readonly) struct GEOJunctionElement *junctionElements;
@property (nonatomic, readonly) int transportType;

- (unsigned short)maneuverNamesCount;
- (unsigned short)clearManeuverNames;
- (unsigned short)maneuverNameAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addManeuverName: /* Error: Ran out of types for this method. */;
- (unsigned short)signpostsCount;
- (unsigned short)clearSignposts;
- (unsigned short)signpostAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addSignpost: /* Error: Ran out of types for this method. */;

@end
