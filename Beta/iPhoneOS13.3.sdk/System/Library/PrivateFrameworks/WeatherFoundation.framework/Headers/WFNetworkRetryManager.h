/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WFNetworkRetryManager : NSObject

{
    NSMutableDictionary *_failTrackerDict;
    NSMutableSet *_failingAPIVersionsSet;
}

@property (nonatomic, readonly) NSMutableDictionary *failTrackerDict;
@property (nonatomic, readonly) NSMutableSet *failingAPIVersionsSet;
@property (nonatomic, readonly) NSArray *apiVersions;
@property (nonatomic, readonly) NSArray *failingAPIVersions;

- (id)init;
- (id)apiVersionForSettings:(id)arg1;
- (void)requestSuccessForAPIVersion:(id)arg1;
- (void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2;
- (id)apiVersionForSettings:(id)arg1 aggregateDictionary:(id)arg2;
- (_Bool)defaultAPIVersionIsFailingForSettings:(id)arg1 failTracker:(id)arg2;
- (void)requestSuccessForAPIVersion:(id)arg1 aggregateDictionary:(id)arg2;
- (void)requestFailureForAPIVersion:(id)arg1 aggregateDictionary:(id)arg2 error:(id)arg3;
- (int)consecutiveFailsForAPIVersion:(id)arg1;
- (double)lastFailTimeInSecondsForAPIVersion:(id)arg1;

@end
