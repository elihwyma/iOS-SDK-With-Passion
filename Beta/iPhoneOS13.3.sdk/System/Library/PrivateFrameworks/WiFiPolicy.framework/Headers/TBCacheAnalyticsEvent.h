/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface TBCacheAnalyticsEvent : NSObject

{
    unsigned long long _status;
    NSNumber *_staleness;
    NSNumber *_tileKey;
    NSNumber *_type;
    NSNumber *_errorCode;
    NSString *_eventName;
    NSDictionary *_eventDictionary;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic) NSNumber *staleness;
@property (nonatomic) NSNumber *tileKey;
@property (nonatomic) NSNumber *type;
@property (nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cacheAnalyticsEventWithStatus:(unsigned long long)arg1 staleness:(unsigned long long)arg2 tileKey:(unsigned long long)arg3 type:(unsigned long long)arg4 error:(id)arg5;
+ (id)cacheEventWithTotalCount:(unsigned long long)arg1 last24HoursCount:(unsigned long long)arg2;

@end
