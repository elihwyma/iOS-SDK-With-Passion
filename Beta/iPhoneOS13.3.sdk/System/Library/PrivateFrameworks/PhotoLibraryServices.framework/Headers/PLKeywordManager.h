/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PLPhotoLibraryPathManager;

@protocol OS_dispatch_queue;

@interface PLKeywordManager : NSObject

{
    PLPhotoLibraryPathManager *_pathManager;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableDictionary *_keywordCache;
}

+ (id)keywordsForAssetWithUUID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)keywordsForAsset:(id)arg1;
+ (id)keywordsForAssets:(id)arg1;
+ (id)_keywordsForAsset:(id)arg1;

- (id)initWithPathManager:(id)arg1;
- (_Bool)setKeywords:(id)arg1 forAssetUUID:(id)arg2 managedObjectContext:(id)arg3;
- (_Bool)setKeywords:(id)arg1 forAsset:(id)arg2;
- (void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:(id)arg1;
- (void)_invalidateKeywordCache;
- (id)_inq_keywordObjectsForKeywords:(id)arg1 managedObjectContext:(id)arg2;
- (_Bool)_setKeywords:(id)arg1 forAsset:(id)arg2 managedObjectContext:(id)arg3;

@end
