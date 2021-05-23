/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class CLLocation, NSString;

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager

{
    CLLocation *_lastLocationUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CLLocation *currentLocation;

+ (_Bool)_wantsSeperateRelevanceQueue;

- (void)pause;
- (void)resume;
- (void)_queue_loadLocation:(id)arg1;
- (void)locationManagerDidUpdateLocation:(id)arg1;

@end
