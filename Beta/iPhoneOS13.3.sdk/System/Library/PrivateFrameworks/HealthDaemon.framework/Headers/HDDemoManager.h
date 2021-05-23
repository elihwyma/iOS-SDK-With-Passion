/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class _HDDataFaker;

@interface HDDemoManager : NSObject

{
    _HDDataFaker *_faker;
}

- (void)stopFakingData;
- (void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isProvidingData;

@end
