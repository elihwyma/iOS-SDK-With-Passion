/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer, VCRealmDataStore;

@protocol OS_dispatch_queue;

@interface VCCoreDataStore : NSObject

{
    VCRealmDataStore *_realmDataStore;
    NSPersistentContainer *_container;
    NSManagedObjectContext *_context;
    NSManagedObjectContext *_suggestionsContext;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic, readonly) VCRealmDataStore *realmDataStore;
@property (retain, nonatomic) NSPersistentContainer *container;
@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSManagedObjectContext *suggestionsContext;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;

+ (_Bool)destroyPersistentStore:(id)arg1 error:(id *)arg2;

- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPersistentStoreDescription:(id)arg1 realmDataStore:(id)arg2 error:(id *)arg3;
- (_Bool)resetPersistentStore:(id *)arg1;
- (_Bool)loadPersistentStoreWithDescription:(id)arg1 error:(id *)arg2;
- (_Bool)saveContextOrRollback:(id *)arg1;
- (_Bool)saveContext:(id)arg1 orRollback:(id *)arg2;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteShortcutSuggestionsFromApps:(id)arg1;
- (void)deleteStaleShortcutSuggestions;

@end
