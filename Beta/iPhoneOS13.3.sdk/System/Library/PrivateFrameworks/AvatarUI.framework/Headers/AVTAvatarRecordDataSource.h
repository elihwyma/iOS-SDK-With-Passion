/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarFetchRequest, AVTAvatarStore, AVTObservableAvatarStore, NSMutableArray, NSNotificationCenter, NSPointerArray, NSString;

@protocol AVTUILogger, NSObject, OS_dispatch_queue;

@interface AVTAvatarRecordDataSource : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AVTAvatarStore *_underlyingStore;
    AVTObservableAvatarStore *_backingStore;
    AVTAvatarFetchRequest *_fetchRequest;
    NSMutableArray *_nts_recordStorage;
    id <AVTUILogger> _logger;
    NSNotificationCenter *_notificationCenter;
    NSPointerArray *_nts_observers;
    id <NSObject> _nts_changeNotificationObserver;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) AVTAvatarStore *underlyingStore;
@property (nonatomic, readonly) AVTObservableAvatarStore *backingStore;
@property (nonatomic, readonly) AVTAvatarFetchRequest *fetchRequest;
@property (retain, nonatomic) NSMutableArray *nts_recordStorage;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSPointerArray *nts_observers;
@property (retain, nonatomic) id <NSObject> nts_changeNotificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadRecordsWithStore:(id)arg1 request:(id)arg2 logger:(id)arg3;
+ (id)sortedRecordsEditableFirstReverseOrder:(id)arg1;
+ (unsigned long long)indexForInsertingRecord:(id)arg1 inRecords:(id)arg2;
+ (unsigned long long)indexForInsertingDuplicateRecord:(id)arg1 original:(id)arg2 inRecords:(id)arg3;
+ (id)defaultUIDataSourceWithDomainIdentifier:(id)arg1;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)recordAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfRecordPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfRecords;
- (id)internalRecordStore;
- (id)recordStore;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 environment:(id)arg3;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 environment:(id)arg4;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 logger:(id)arg4 notificationCenter:(id)arg5;
- (void)avatarStoreDidChange:(id)arg1;
- (_Bool)areRecordsLoaded;
- (void)performObserversWork:(CDUnknownBlockType)arg1;
- (void)enumerateObserversRespondingToSelector:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performSyncWorkWithRecords:(CDUnknownBlockType)arg1;
- (id)indexesOfRecordsPassingTest:(CDUnknownBlockType)arg1;
- (void)store:(id)arg1 didSaveAvatar:(id)arg2 postCompletionHandler:(CDUnknownBlockType)arg3;
- (void)store:(id)arg1 didDeleteAvatarWithIdentifier:(id)arg2 postCompletionHandler:(CDUnknownBlockType)arg3;
- (void)store:(id)arg1 didCreateDuplicateAvatar:(id)arg2 forOriginal:(id)arg3 postCompletionHandler:(CDUnknownBlockType)arg4;
- (id)indexSetForEditableRecords;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2;
- (void)addPriorityObserver:(id)arg1;

@end
