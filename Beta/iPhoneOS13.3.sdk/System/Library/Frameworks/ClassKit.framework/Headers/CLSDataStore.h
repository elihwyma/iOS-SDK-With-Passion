/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class CLSActivity, CLSAuthTree, CLSContext, CLSCurrentUser, CLSEndpointConnection, CLSGraph, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol CLSDataStoreDelegate;

@interface CLSDataStore : NSObject

{
    NSMutableSet *_dataObservers;
    struct NSMutableDictionary *_deletedObjectsByID;
    NSMutableDictionary *_objectGenerationsByID;
    CLSCurrentUser *_cachedCurrentUser;
    int _accountChangeToken;
    struct os_unfair_recursive_lock_s _lock;
    NSMutableArray *_pendingSaves;
    _Bool _saveInProgress;
    CLSAuthTree *_authTree;
    NSMutableArray *_runningActivities;
    NSDate *_lastPruneDate;
    NSString *_appBundleIdentifier;
    NSString *_appName;
    id <CLSDataStoreDelegate> _delegate;
    CLSContext *_mainAppContext;
    CLSEndpointConnection *_endpointConnection;
    CLSGraph *_graph;
}

@property (retain, nonatomic) CLSContext *mainAppContext;
@property (retain, nonatomic) CLSEndpointConnection *endpointConnection;
@property (retain, nonatomic) CLSCurrentUser *cachedCurrentUser;
@property (nonatomic, readonly) CLSGraph *graph;
@property (nonatomic, readonly) CLSAuthTree *authTree;
@property (nonatomic, readonly) CLSContext *activeContext;
@property (nonatomic, readonly) CLSActivity *runningActivity;
@property (weak, nonatomic) id <CLSDataStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isAvailable;
+ (id)shared;
+ (_Bool)isPrivateSearchAPIEnabled;
+ (_Bool)isSearchAPIEnabled;
+ (id)newDatastore;
+ (_Bool)isDashboardApp;
+ (Class)endpointClass;
+ (_Bool)isPDTool;

- (id)init;
- (void)dealloc;
- (id)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)lock;
- (void)unlock;
- (void)reset;
- (id)initWithEndpoint:(id)arg1;
- (void)_reconnect;
- (id)currentUser;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)allContexts;
- (void)_save;
- (id)_addObject:(id)arg1;
- (id)appIdentifier;
- (void)objectsMatching:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)objectWithObjectID:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)_registerForDarwinNotifications;
- (id)runningActivities;
- (_Bool)isRemovedObject:(id)arg1;
- (void)pruneDeletedObjectsWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)contextsMatchingIdentifierPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPrivateSearchAPIEnabled;
- (_Bool)isDashboardAPIEnabled;
- (_Bool)isSearchAPIEnabled;
- (void)triggerProgressTransparencyMessageIfNeeded;
- (void)developerModeChanged:(id)arg1;
- (void)_connectionInterupted;
- (void)_connectionConnected;
- (void)_reenableObservers;
- (void)currentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDataObserver:(id)arg1;
- (void)refreshMainAppContext;
- (id)dataServer:(CDUnknownBlockType)arg1;
- (void)dataServer:(id)arg1 executeQuery:(id)arg2;
- (id)syncDataServer:(CDUnknownBlockType)arg1;
- (id)cachedMainAppContext;
- (void)_createMainAppContext;
- (void)_refreshMainAppContext;
- (void)awaitExecuteQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isAppClient;
- (void)fetchAndCompleteAllAssignedActivitiesForContextPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_modifiedObjects;
- (id)_validateObjects:(id)arg1;
- (id)_filterObjectsBeingSavedFromObjects:(id)arg1;
- (void)saveObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshAuthTreeWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isAllowedToInsertObject:(id)arg1;
- (void)markObjectAsDeleted:(id)arg1;
- (void)removeObjectWithObjectID:(id)arg1 class:(Class)arg2;
- (void)contextsMatchingIdentifierPath:(id)arg1 parentContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (id)syncUtilityServer:(CDUnknownBlockType)arg1;
- (void)fetchTransparencyMessageInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)faultMainAppContext;
- (void)currentUserWithServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)faultProcessor:(id)arg1 shouldFaultRelation:(id)arg2 fromObject:(struct NSObject *)arg3;
- (void)contextsMatchingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contextsMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeAllAssignedActivitiesMatching:(id)arg1;
- (void)removeContext:(id)arg1;
- (void)removeContextWithObjectID:(id)arg1;
- (void)addRunningActivitiesObject:(id)arg1;
- (void)removeRunningActivitiesObject:(id)arg1;
- (void)shouldSyncTeacherBrowsedContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setShouldSyncTeacherBrowsedContexts:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deregisterDataObserver:(id)arg1;
- (void)syncFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)featureIsEnabled:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)classesForPersonID:(id)arg1 role:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_classesForCurrentUserWithRole:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addHandout:(id)arg1;
- (void)removeHandout:(id)arg1;
- (void)publishHandout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handoutAttachmentForDocumentURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFavorite:(id)arg1;
- (void)removeFavorite:(id)arg1;
- (void)instructedClassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)personsInClassWithClassID:(id)arg1 role:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveClass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeClass:(id)arg1;
- (void)enrolledClassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)canSearchRostersWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isSearchAllowed;
- (_Bool)shouldPerformSearchAPIOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)membersOfGroupWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
