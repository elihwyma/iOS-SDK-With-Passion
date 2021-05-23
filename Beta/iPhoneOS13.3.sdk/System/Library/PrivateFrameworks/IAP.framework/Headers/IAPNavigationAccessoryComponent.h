/*
 Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IAPNavigationAccessoryComponent : NSObject

{
    _Bool _isEnabled;
    _Bool _requestSourceName;
    _Bool _requestSourceSupportsRouteGuidance;
    _Bool __enabledModified;
    unsigned long long _identifier;
    NSString *_name;
    unsigned long long _maxLength_CurrentRoadName;
    unsigned long long _maxLength_DestinationRoadName;
    unsigned long long _maxLength_PostManeuverRoadName;
    unsigned long long _maxLength_ManeuverDescription;
    unsigned long long _maxCapacity_GuidanceManeuver;
}

@property _Bool _enabledModified;
@property unsigned long long identifier;
@property (retain) NSString *name;
@property _Bool isEnabled;
@property unsigned long long maxLength_CurrentRoadName;
@property unsigned long long maxLength_DestinationRoadName;
@property unsigned long long maxLength_PostManeuverRoadName;
@property unsigned long long maxLength_ManeuverDescription;
@property unsigned long long maxCapacity_GuidanceManeuver;
@property _Bool requestSourceName;
@property _Bool requestSourceSupportsRouteGuidance;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDict:(id)arg1;

@end
