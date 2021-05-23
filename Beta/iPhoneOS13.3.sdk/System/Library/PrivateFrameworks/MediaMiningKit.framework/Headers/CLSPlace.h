/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSPrimitive.h>

@class CLCircularRegion, CLSBusinessItem, CLSLitePlacemark, NSArray, NSString;

@interface CLSPlace : CLSPrimitive

{
    NSString *_name;
    CLCircularRegion *_region;
    CLSLitePlacemark *_placemark;
    NSArray *_categories;
    CLSBusinessItem *_businessItem;
}

@property (nonatomic, readonly) CLSBusinessItem *businessItem;
@property (retain, nonatomic) NSArray *categories;
@property (nonatomic, readonly) CLCircularRegion *region;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) CLSLitePlacemark *placemark;
@property (nonatomic, readonly) NSString *name;

+ (id)placeWithBusinessItem:(id)arg1;
+ (id)placeWithLocation:(id)arg1;
+ (id)placeWithPlacemark:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPlace:(id)arg1;

@end
