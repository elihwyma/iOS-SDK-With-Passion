/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHEarnedInstanceDuplicateUtility, ACHEarnedInstanceEntityWrapper, HDProfile, NSArray, NSHashTable, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface ACHEarnedInstanceStore : NSObject

{
    _Bool _initialEarnedInstanceFetchComplete;
    unsigned char _device;
    HDProfile *_profile;
    ACHEarnedInstanceEntityWrapper *_entityWrapper;
    ACHEarnedInstanceDuplicateUtility *_duplicateUtility;
    NSObject<OS_dispatch_queue> *_earnedInstanceQueue;
    NSMutableArray *_allEarnedInstances;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHEarnedInstanceEntityWrapper *entityWrapper;
@property (retain, nonatomic) ACHEarnedInstanceDuplicateUtility *duplicateUtility;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *earnedInstanceQueue;
@property (retain, nonatomic) NSMutableArray *allEarnedInstances;
@property (nonatomic) _Bool initialEarnedInstanceFetchComplete;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned char device;
@property (nonatomic, readonly) NSArray *earnedInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)earnedInstancesForTemplateUniqueName:(id)arg1;
- (_Bool)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (void)earnedInstanceEntityDidApplyJournalEntriesInsertedEarnedInstances:(id)arg1 removedEarnedInstances:(id)arg2;
- (_Bool)removeEarnedInstances:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllEarnedInstancesWithError:(id *)arg1;
- (void)loadAllEarnedInstancesFromDatabaseIfNecessary;
- (_Bool)addEarnedInstances:(id)arg1 databaseContext:(id)arg2 error:(id *)arg3;
- (_Bool)addEarnedInstances:(id)arg1 error:(id *)arg2;
- (_Bool)_queue_addEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(_Bool)arg4 error:(id *)arg5;
- (void)_queue_appendOrInsertEarnedInstanceToInMemoryStore:(id)arg1;
- (void)_notifyObserversOfAddedEarnedInstances:(id)arg1;
- (id)_queue_earnedInstancesArray;
- (id)_queue_addEarnedInstancesWithSingleTemplate:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_removeEarnedInstances:(id)arg1 error:(id *)arg2;
- (void)_notifyObserversOfRemovedEarnedInstances:(id)arg1;
- (void)_notifyInitialFetchComplete;
- (id)initWithProfile:(id)arg1 earnedInstanceEntityWrapper:(id)arg2 earnedInstanceDuplicateUtility:(id)arg3 device:(unsigned char)arg4;

@end
