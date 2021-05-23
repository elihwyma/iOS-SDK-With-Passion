/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedEnrouteNotice.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <Swift>

{
    GEOTrafficCamera *_trafficCamera;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) unsigned int highlightDistance;
@property (nonatomic, readonly) _Bool hasSpeedLimitText;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) _Bool hasSpeedThreshold;
@property (nonatomic, readonly) double speedThreshold;
@property (nonatomic, readonly) _Bool hasCameraPriority;
@property (nonatomic, readonly) unsigned int cameraPriority;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)position;
- (id)titleFormatForLocation:(id)arg1;
- (id)detailFormatForLocation:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 trafficCamera:(id)arg2 onRoute:(id)arg3;

@end
