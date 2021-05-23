/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger

{
    _Bool _hasDeviceBeenUnlockedSinceBoot;
}

@property _Bool hasDeviceBeenUnlockedSinceBoot;

+ (id)instance;

- (id)init;
- (void)reFetch;
- (void)setupMobileKeyBag;
- (void)cacheUnlockSinceBootState;

@end
