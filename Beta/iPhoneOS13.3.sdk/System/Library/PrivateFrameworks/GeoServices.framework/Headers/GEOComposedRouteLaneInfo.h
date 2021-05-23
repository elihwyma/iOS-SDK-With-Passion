/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSMutableArray;

@interface GEOComposedRouteLaneInfo : NSObject <Swift>

{
    NSMutableArray *_directions;
    _Bool _good;
    _Bool _hov;
    _Bool _preferred;
}

@property (nonatomic, readonly) _Bool hasDirections;
@property (nonatomic, readonly) NSArray *directions;
@property (nonatomic, readonly) _Bool isLaneForManeuver;
@property (nonatomic, readonly) _Bool isHOVLane;
@property (nonatomic, readonly) _Bool isPreferredLaneForManeuver;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneInfo:(id)arg1;

@end
