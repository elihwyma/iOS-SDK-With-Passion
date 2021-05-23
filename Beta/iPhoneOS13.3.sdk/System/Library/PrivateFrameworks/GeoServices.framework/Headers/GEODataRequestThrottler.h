/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, geo_isolater;

@protocol OS_dispatch_source;

@interface GEODataRequestThrottler : NSObject

{
    geo_isolater *_isolation;
    NSDictionary *_defaultThrottlePolicy;
    NSDictionary *_globalThrottlePolicy;
    _Bool _throttlePoliciesCached;
    NSMutableDictionary *_throttlers;
    NSObject<OS_dispatch_source> *_updateStateTimer;
    int _defaultChangedNotification;
    id _networkChangedNotification;
    unsigned char _throttleEventLogLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedThrottler;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)reset;
- (void)_reset;
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;
- (void)pruneThrottlers;
- (void)_withThrottlersForKey:(struct GEOThrottleKey)arg1 auditToken:(id)arg2 do:(CDUnknownBlockType)arg3;
- (id)throttlerForKeyPath:(id)arg1;
- (void)_pruneThrottlers;
- (void)_updateSavedState:(id)arg1;
- (_Bool)allowRequest:(CDStruct_d1a7ebee)arg1 forClient:(id)arg2 throttlerToken:(id *)arg3 error:(id *)arg4;
- (void)getInfoForRequest:(CDStruct_d1a7ebee)arg1 client:(id)arg2 timeUntilNextReset:(double *)arg3 availableRequestCount:(unsigned int *)arg4;

@end
