/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKWorkoutRoute, NSString;

@interface HKWorkoutRouteQuery : HKQuery

{
    CDUnknownBlockType _dataHandler;
    HKWorkoutRoute *_series;
}

@property (copy) CDUnknownBlockType dataHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(_Bool)arg2 query:(id)arg3;
- (id)initWithRoute:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;

@end
