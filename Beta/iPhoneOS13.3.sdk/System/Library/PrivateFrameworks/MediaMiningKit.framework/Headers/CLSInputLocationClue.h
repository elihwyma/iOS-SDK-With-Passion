/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSInputClue.h>

@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue

{
    CLSPlace *_place;
}

+ (id)clueWithLocation:(id)arg1;
+ (id)cluesWithLocations:(id)arg1;

- (id)description;
- (id)location;
- (id)region;
- (id)placemark;
- (id)place;
- (void)setPlace:(id)arg1;
- (id)projectedLocation;
- (_Bool)isEqualToClue:(id)arg1;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)regionInPlacemark;
- (struct CLLocationCoordinate2D)closestCoordinates;
- (_Bool)isDefinite;

@end
