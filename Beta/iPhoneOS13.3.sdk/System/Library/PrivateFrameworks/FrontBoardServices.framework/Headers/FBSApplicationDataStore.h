/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject

{
    NSString *_bundleId;
    id <FBSApplicationDataStoreRepositoryClient> _client;
    _Bool _clientNeedsCheckin;
}

@property (nonatomic, readonly) NSString *bundleID;

+ (void)synchronize;
+ (_Bool)isServerProcess;
+ (void)setPrefetchedKeys:(id)arg1;
+ (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_doWithClassClient:(CDUnknownBlockType)arg1;
+ (id)storeForApplication:(id)arg1;
+ (id)applicationsWithAvailableStores;
+ (void)_setClassClient:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)_initWithBundleId:(id)arg1 client:(id)arg2;
- (id)_makeSafe:(id)arg1 forType:(Class)arg2;
- (void)objectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)archivedObjectForKey:(id)arg1;
- (void)archivedObjectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;

@end
