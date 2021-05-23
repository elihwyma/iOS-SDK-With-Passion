/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHAchievementProgressEngine, ACHEarnedInstanceStore, ACHTemplateAssetRegistry, ACHTemplateStore, NSHashTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ACHAchievementStore : NSObject

{
    _Bool _templateStoreDidFinishInitialFetch;
    _Bool _earnedInstanceStoreDidFinishInitialFetch;
    ACHTemplateStore *_templateStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    ACHTemplateAssetRegistry *_templateAssetRegistry;
    ACHAchievementProgressEngine *_progressProvider;
    NSMutableDictionary *_achievementsByTemplateUniqueName;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHTemplateAssetRegistry *templateAssetRegistry;
@property (retain, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (retain, nonatomic) NSMutableDictionary *achievementsByTemplateUniqueName;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) _Bool templateStoreDidFinishInitialFetch;
@property (nonatomic) _Bool earnedInstanceStoreDidFinishInitialFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_notifyObserversOfInitialFetchCompletion;
- (void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2;
- (void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2;
- (void)templateStoreDidFinishInitialFetch:(id)arg1;
- (void)templateAssetRegistry:(id)arg1 didUpdateResourcesForTemplatesWithSourceName:(id)arg2;
- (id)_queue_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)arg1 earnedInstance:(id)arg2;
- (void)progressProviderDidUpdateProgressValues:(id)arg1;
- (void)_queue_addTemplatesToLocalStore:(id)arg1;
- (void)_queue_removeTemplatesFromLocalStore:(id)arg1;
- (void)_queue_addEarnedInstancesToLocalStore:(id)arg1;
- (void)_queue_removeEarnedInstancesFromLocalStore:(id)arg1;
- (_Bool)_queue_addProgressAndGoalToAchievement:(id)arg1;
- (void)_notifyObserversOfNewAchievements:(id)arg1;
- (void)_notifyObserversOfRemovedAchievements:(id)arg1;
- (void)_queue_populateResourcesForAchievementsWithTemplateSourceName:(id)arg1;
- (void)_notifyObserversOfUpdatedAchievements:(id)arg1;
- (void)earnedInstanceStore:(id)arg1 didAddNewEarnedInstances:(id)arg2;
- (void)earnedInstanceStore:(id)arg1 didRemoveEarnedInstances:(id)arg2;
- (void)earnedInstanceStoreDidFinishInitialFetch:(id)arg1;
- (id)initWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 templateAssetRegistry:(id)arg3 progressProvider:(id)arg4;
- (void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)allAchievements;
- (id)achievementWithTemplateUniqueName:(id)arg1;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)arg1;
- (void)recalculateProgressForAllAchievements;

@end
