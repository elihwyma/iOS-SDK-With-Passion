/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSError, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSXPCConnection;

@protocol AnalyticsWorkspaceHealthDelegate;

@interface AnalyticsWorkspace : NSObject

{
    NSString *backingStore;
    _Bool readOnly;
    _Bool pathKnownToFail;
    NSString *storeKind;
    NSString *storeProt;
    _Bool __persistent;
    _Bool _forceIntegrityCheck;
    _Bool _forceDestroyPersistentStore;
    _Bool _forceDeleteFile;
    _Bool _integrityCheckFailed;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    NSManagedObjectContext *__mainObjectContext;
    NSManagedObjectModel *__objectModel;
    CDUnknownBlockType __resetCompletionBlock;
    NSXPCConnection *__connection;
    id <AnalyticsWorkspaceHealthDelegate> _healthDelegate;
    NSString *_objectModelName;
    NSBundle *_objectModelResidentBundle;
    NSError *_persistentStoreError;
}

@property (retain, nonatomic) NSError *persistentStoreError;
@property (nonatomic, readonly) _Bool persistent;
@property (retain, nonatomic) id <AnalyticsWorkspaceHealthDelegate> healthDelegate;
@property (nonatomic) _Bool forceIntegrityCheck;
@property (nonatomic) _Bool forceDestroyPersistentStore;
@property (nonatomic) _Bool forceDeleteFile;
@property (retain, nonatomic) NSString *objectModelName;
@property (retain, nonatomic) NSBundle *objectModelResidentBundle;
@property (nonatomic, readonly) _Bool integrityCheckFailed;
@property (retain, nonatomic, readonly) NSManagedObjectModel *objectModel;
@property (retain, nonatomic, readonly) NSManagedObjectContext *mainObjectContext;
@property (retain, nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic, readonly) NSXPCConnection *connection;
@property (copy, nonatomic) CDUnknownBlockType resetCompletionBlock;

+ (void)initialize;
+ (id)defaultWorkspace;
+ (id)workspaceWithName:(id)arg1 atPath:(id)arg2 objectModelName:(id)arg3 objectModelBundle:(id)arg4 useReadOnly:(_Bool)arg5;
+ (id)workspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(_Bool)arg3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (_Bool)save;
- (id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(_Bool)arg3;
- (id)_initWithName:(id)arg1 inMemory:(_Bool)arg2 useReadOnly:(_Bool)arg3 customModelName:(id)arg4 loadModelFromBundle:(id)arg5;
- (id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 objectModelName:(id)arg3 objectModelBundle:(id)arg4 useReadOnly:(_Bool)arg5;
- (_Bool)_primePath:(id)arg1;
- (id)createNewContext;
- (id)_cloneInternal:(id)arg1 intoWorkspace:(id)arg2 ancestry:(id)arg3 iteration:(unsigned long long)arg4 mustFail:(_Bool *)arg5;
- (id)initInMemoryWorkspaceWithName:(id)arg1 customModelName:(id)arg2 objectModelBundle:(id)arg3;
- (id)initWorkspaceWithService:(id)arg1;
- (_Bool)setCustomPersistenceProperties:(id)arg1;
- (_Bool)canCloneObjectsOfType:(id)arg1;
- (void)enumerateResidentObjectsOfType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)cloneObject:(id)arg1 intoWorkspace:(id)arg2;

@end
