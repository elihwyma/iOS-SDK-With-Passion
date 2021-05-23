/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSString;

@interface MNRouteUpdate : NSObject

{
    CLLocation *_origin;
    double _travelTime;
    double _aggressiveTravelTime;
    double _conservativeTravelTime;
    NSArray *_routes;
    NSArray *_nonRecommendedRoutes;
    NSString *_routeSummary;
    NSString *_longRouteSummary;
    long long _travelMode;
    NSDate *_requestTime;
    NSString *_requestingClientID;
}

@property (retain, nonatomic) CLLocation *origin;
@property (nonatomic) double travelTime;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSArray *nonRecommendedRoutes;
@property (copy, nonatomic) NSString *routeSummary;
@property (copy, nonatomic) NSString *longRouteSummary;
@property (nonatomic) long long travelMode;
@property (retain, nonatomic) NSDate *requestTime;
@property (copy, nonatomic) NSString *requestingClientID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;
- (id)copyWithOptions:(long long)arg1;
- (_Bool)satisfiesOptions:(long long)arg1;
- (_Bool)satisfiesFreshness:(id)arg1 fromLocation:(id)arg2;

@end
