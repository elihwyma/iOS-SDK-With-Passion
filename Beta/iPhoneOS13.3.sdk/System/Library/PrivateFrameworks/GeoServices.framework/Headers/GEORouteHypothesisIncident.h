/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@interface GEORouteHypothesisIncident : NSObject <Swift>

{
    int _routeIncidentType;
    int _routeIncidentSignificance;
}

@property (nonatomic, readonly) int routeIncidentType;
@property (nonatomic, readonly) int routeIncidentSignificance;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2;

@end
