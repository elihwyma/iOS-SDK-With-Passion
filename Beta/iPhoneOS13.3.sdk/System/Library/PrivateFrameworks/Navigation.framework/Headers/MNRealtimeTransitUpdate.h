/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNRealtimeUpdate.h>

@class GEOTransitRouteUpdate;

@interface MNRealtimeTransitUpdate : MNRealtimeUpdate

{
    GEOTransitRouteUpdate *_transitUpdate;
}

@property (nonatomic, readonly) GEOTransitRouteUpdate *transitUpdate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)routeID;
- (id)initWithTransitRouteUpdate:(id)arg1;

@end
