/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKSourceListDataModel, HKSynchronousObserverSet, NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

@interface HKSourceListDataSource : NSObject

{
    NSObject<OS_dispatch_queue> *_mainQueue;
    NSObject<OS_dispatch_queue> *_resultsQueue;
    NSMutableArray *_transformers;
    NSMutableArray *_followupTransformers;
    NSArray *_rawSources;
    HKSynchronousObserverSet *_observers;
    int _notifyToken;
    _Bool _hasInitiatedFetch;
    _Atomic _Bool _invalidated;
    _Bool _shouldFetchAppInstallationStatus;
    _Bool _shouldFetchAppIcons;
    _Bool _shouldFetchPurposeStrings;
    _Bool _shouldIncludeSpecialSources;
    _Bool _deliverUpdates;
    HKHealthStore *_healthStore;
    HKSourceListDataModel *_sources;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKSourceListDataModel *sources;
@property (nonatomic) _Bool shouldFetchAppInstallationStatus;
@property (nonatomic) _Bool shouldFetchAppIcons;
@property (nonatomic) _Bool shouldFetchPurposeStrings;
@property (nonatomic) _Bool shouldIncludeSpecialSources;
@property (nonatomic) _Bool deliverUpdates;

+ (void)fetchIconForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)_builtinIconFetchTransformer;
+ (void)_performTransformations:(id)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_remoteWatchAppPurposeStringsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)_builtinInstallationStatusTransformer;
+ (CDUnknownBlockType)_builtinPurposeStringsFetchTransformer;

- (void)dealloc;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 sources:(id)arg2 queue:(id)arg3;
- (void)fetchSources;
- (id)initWithHealthStore:(id)arg1 queue:(id)arg2;
- (void)_prependBuiltinTransformers;
- (void)_didFetchSources:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_specialAppBundleIdentifiers;
- (void)_fakeSourceForInstalledAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_notifyObserversForDataSourceUpdate;
- (void)_throttledNotificationOfDataSourceUpdate;
- (void)fetchModelForSources:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFetchTransformer:(CDUnknownBlockType)arg1;

@end
