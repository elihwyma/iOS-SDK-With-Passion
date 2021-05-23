/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCBoostableOperationThrottler, FCFetchedValueDescriptor, NFUnfairLock, NSError, NSHashTable, NSString;

@protocol NFCopying;

@interface FCFetchedValueManager : NSObject

{
    id <NFCopying> _value;
    FCFetchedValueDescriptor *_descriptor;
    FCBoostableOperationThrottler *_operationThrottler;
    NSHashTable *_observers;
    NFUnfairLock *_lock;
    NSError *_error;
}

@property (copy, nonatomic, readonly) FCFetchedValueDescriptor *descriptor;
@property (nonatomic, readonly) FCBoostableOperationThrottler *operationThrottler;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) NFUnfairLock *lock;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) id <NFCopying> value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)fetchValueWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)_optionsForCachePolicy:(unsigned long long)arg1;
- (id)_updateDependentManagersPromiseWithQualityOfService:(long long)arg1;
- (unsigned long long)_cachePolicyForOptions:(unsigned long long)arg1;
- (void)_handleValue:(id)arg1;
- (void)fetchedObjectManager:(id)arg1 valueDidChange:(id)arg2;
- (id)valuePromiseWithQualityOfService:(long long)arg1;

@end
