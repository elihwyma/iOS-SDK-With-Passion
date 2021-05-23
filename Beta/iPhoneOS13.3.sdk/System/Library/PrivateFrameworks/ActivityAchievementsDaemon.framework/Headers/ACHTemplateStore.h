/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHTemplateEntityWrapper, HDProfile, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface ACHTemplateStore : NSObject

{
    unsigned char _device;
    _Bool _initialFetchComplete;
    HDProfile *_profile;
    ACHTemplateEntityWrapper *_entityWrapper;
    NSMutableSet *_templates;
    NSMutableDictionary *_templatesByUniqueName;
    NSMutableDictionary *_templatesByKey;
    NSDictionary *_templatesReadyToAdd;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateEntityWrapper *entityWrapper;
@property (nonatomic) unsigned char device;
@property (retain, nonatomic) NSMutableSet *templates;
@property (retain, nonatomic) NSMutableDictionary *templatesByUniqueName;
@property (retain, nonatomic) NSMutableDictionary *templatesByKey;
@property (retain, nonatomic) NSDictionary *templatesReadyToAdd;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) _Bool initialFetchComplete;
@property (nonatomic, readonly) NSArray *allTemplates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)daemonReady:(id)arg1;
- (_Bool)_queue_addTemplates:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(_Bool)arg4 error:(id *)arg5;
- (void)_addTemplatesToLocalCollections:(id)arg1;
- (void)_notifyObserversOfInitialFetchCompletion;
- (id)_queue_templatesFilteredForDuplicates:(id)arg1;
- (_Bool)_isValidTemplate:(id)arg1;
- (_Bool)_queue_addTemplatesToDatabase:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id *)arg4;
- (void)_notifyObserversOfNewTemplates:(id)arg1;
- (_Bool)removeTemplates:(id)arg1 error:(id *)arg2;
- (void)_notifyObserversOfRemovedTemplates:(id)arg1;
- (_Bool)_removeTemplatesFromDatabase:(id)arg1 error:(id *)arg2;
- (void)_removeTemplatesFromLocalCollections:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2;
- (id)initWithProfile:(id)arg1 entityWrapper:(id)arg2 device:(unsigned char)arg3;
- (id)templateForUniqueName:(id)arg1;
- (id)templateForTemplateKey:(unsigned long long)arg1;
- (id)availableTemplatesForDateComponents:(id)arg1 countryCode:(id)arg2;
- (void)loadAllTemplatesFromDatabaseIfNecessary;
- (void)addTemplates:(id)arg1;
- (_Bool)addTemplates:(id)arg1 databaseContext:(id)arg2 error:(id *)arg3;
- (_Bool)removeAllTemplates:(id *)arg1;

@end
