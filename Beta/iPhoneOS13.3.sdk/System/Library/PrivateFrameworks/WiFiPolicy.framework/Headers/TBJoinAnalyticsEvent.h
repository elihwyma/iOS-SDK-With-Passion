/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface TBJoinAnalyticsEvent : NSObject

{
    unsigned long long _type;
    unsigned long long _source;
    unsigned long long _action;
    NSString *_bssid;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_score;
    NSNumber *_visibleDuration;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *score;
@property (nonatomic) NSNumber *visibleDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSDictionary *eventDictionary;

+ (id)joinRecommendationEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 BSSID:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 score:(id)arg6 visibleDuration:(id)arg7;
+ (id)joinAlertEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 visibleDuration:(id)arg3;

@end
