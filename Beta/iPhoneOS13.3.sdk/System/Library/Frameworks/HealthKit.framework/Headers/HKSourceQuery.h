/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSString;

@protocol HKQueryServerInterface;

@interface HKSourceQuery : HKQuery

{
    _Bool _hasDeliveredInitialResults;
    id <HKQueryServerInterface> _serverProxy;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _updateHandler;
}

@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)client_deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
