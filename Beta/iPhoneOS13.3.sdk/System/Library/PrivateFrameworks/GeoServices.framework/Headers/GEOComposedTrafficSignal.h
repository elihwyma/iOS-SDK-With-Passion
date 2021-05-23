/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedEnrouteNotice.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <Swift>

{
    GEOTrafficSignal *_trafficSignal;
}

@property (nonatomic, readonly) int type;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)position;
- (id)initWithEnrouteNotice:(id)arg1 trafficSignal:(id)arg2 onRoute:(id)arg3;

@end
