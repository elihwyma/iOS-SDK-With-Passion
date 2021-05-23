/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKTrafficFeature.h>

@class NSDate, NSString;

@interface VKTrafficIncidentFeature : VKTrafficFeature

{
    NSString *_title;
    NSString *_subtitle;
    long long _type;
    long long _routeRelevance;
    long long _significance;
    _Bool _isNotForDisplay;
    _Bool _isOnSelectedRoute;
    unsigned int _routeOffsetInMeters;
    NSString *_street;
    NSString *_crossStreet;
    NSString *_info;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_lastUpdatedDate;
    unsigned long long _uniqueID;
    NSString *_uniqueString;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long uniqueID;
@property (nonatomic, readonly) NSString *uniqueString;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool isNotForDisplay;
@property (nonatomic) long long routeRelevance;
@property (nonatomic) _Bool isOnSelectedRoute;
@property (nonatomic) unsigned int routeOffsetInMeters;
@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly) NSString *crossStreet;
@property (nonatomic, readonly) NSString *info;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (nonatomic, readonly) long long significance;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIncidentData:(const struct Incident *)arg1 worldPoint:(Matrix_6e1d3589 *)arg2;
- (_Bool)hasSameIdentifier:(id)arg1;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2;

@end
