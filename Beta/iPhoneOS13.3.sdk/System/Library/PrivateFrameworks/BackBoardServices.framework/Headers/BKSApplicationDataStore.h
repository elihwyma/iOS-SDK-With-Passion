/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject

{
    FBSApplicationDataStore *_fbsApplicationDataStore;
}

@property (nonatomic, readonly) NSString *bundleID;

+ (void)synchronize;
+ (void)setPrefetchedKeys:(id)arg1;
+ (id)storeForApplication:(id)arg1;
+ (id)applicationsWithAvailableStores;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)objectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)archivedObjectForKey:(id)arg1;
- (void)archivedObjectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (id)_initWithFBSApplicationDataStore:(id)arg1;

@end
