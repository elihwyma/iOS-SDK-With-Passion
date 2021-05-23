/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSString;

@interface HKObserverQuery : HKQuery

{
    _Bool _observeUnfrozenSeries;
    CDUnknownBlockType _updateHandler;
}

@property (nonatomic, readonly) CDUnknownBlockType updateHandler;
@property (nonatomic) _Bool observeUnfrozenSeries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

@end
