/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKCodableQuantitySeries, HKDevice, HKHealthStore, HKQuantityType, HKTaskServerProxyProvider, NSDate, NSError, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HKQuantitySeriesSampleBuilder : NSObject

{
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    HKDevice *_device;
    long long _batchSize;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_fatalError;
    long long _state;
    HKCodableQuantitySeries *_quantitySeries;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    CDUnknownBlockType _unitTest_insertQuantityCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType unitTest_insertQuantityCompletion;
@property (nonatomic, readonly) long long unitTest_state;
@property (copy, readonly) HKQuantityType *quantityType;
@property (copy, readonly) NSDate *startDate;
@property (copy, readonly) HKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)_clientErrorForFinishedSeries;
+ (id)_exceptionForPreviouslyDiscardedBuilder;

- (id)init;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)discard;
- (_Bool)_validateQuantity:(id)arg1 error:(out id *)arg2;
- (_Bool)_validateDateInterval:(id)arg1 error:(out id *)arg2;
- (_Bool)_changeStateForInsertWithError:(out id *)arg1;
- (_Bool)_insertQuantity:(id)arg1 dateInterval:(id)arg2 error:(id *)arg3;
- (_Bool)insertQuantity:(id)arg1 dateInterval:(id)arg2 error:(id *)arg3;
- (_Bool)_changeStateForFinishWithError:(out id *)arg1;
- (void)_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_discardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_changeStateForFatalError:(id)arg1;
- (void)_taskServer_insertQuantitySeries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_taskServer_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_changeStateForDiscardWithError:(out id *)arg1;
- (void)_taskServer_discardWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queue_clientErrorForFatalError;
- (id)initWithHealthStore:(id)arg1 quantityType:(id)arg2 startDate:(id)arg3 device:(id)arg4;
- (_Bool)insertQuantity:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (void)finishSeriesWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unitTest_discardWithCompletion:(CDUnknownBlockType)arg1;
- (void)unitTest_setBatchSize:(long long)arg1;

@end
