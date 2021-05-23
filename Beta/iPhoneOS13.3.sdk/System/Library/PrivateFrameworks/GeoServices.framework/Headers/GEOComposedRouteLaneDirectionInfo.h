/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@interface GEOComposedRouteLaneDirectionInfo : NSObject <Swift>

{
    int _direction;
    float _angle;
}

@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) float angle;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneArrowHead:(id)arg1;

@end
