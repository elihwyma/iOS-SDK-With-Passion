/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSDictionary, NSString;

@interface _HKCurrentActivitySummaryQuery : HKQuery

{
    CDUnknownBlockType _updateHandler;
    NSDictionary *_collectionIntervals;
}

@property (copy, nonatomic, getter=_collectionIntervals, setter=_setCollectionIntervals:) NSDictionary *collectionIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_validate;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2;

@end
