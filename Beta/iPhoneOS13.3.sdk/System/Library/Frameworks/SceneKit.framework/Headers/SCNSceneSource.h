/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SCNSceneSource : NSObject

{
    struct __C3DSceneSource *_sceneSource;
    struct __C3DScene *_lastLoadedScene;
    NSDictionary *_lastOptions;
    _Bool _sceneLoaded;
    NSDictionary *_sceneSourceOptions;
}

@property (readonly) NSURL *url;
@property (readonly) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sceneSourceWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneSourceWithData:(id)arg1 options:(id)arg2;
+ (_Bool)_shouldCacheWithOptions:(id)arg1;
+ (id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2;
+ (void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3;
+ (void)_removeCachedSceneSourceIfNeededForURL:(id)arg1;
+ (id)sceneTypes;
+ (id)sceneFileTypes;

- (void)dealloc;
- (id)propertyForKey:(id)arg1;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)debugQuickLookObject;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (struct __C3DLibrary *)library;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (struct __C3DScene *)_createSceneRefWithOptions:(id)arg1 statusHandler:(CDUnknownBlockType)arg2;
- (id)sceneSourceOptions;
- (long long)sceneCount;
- (id)sceneWithOptions:(id)arg1 error:(id *)arg2;
- (id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(CDUnknownBlockType)arg3;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(CDUnknownBlockType)arg3;
- (id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2;
- (_Bool)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3 entryObjectConstructor:(CDUnknownBlockType)arg4;
- (id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2;
- (id)identifiersOfEntriesWithClass:(Class)arg1;
- (long long)countOfScenes;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)sceneWithOptions:(id)arg1 statusHandler:(CDUnknownBlockType)arg2;
- (struct __C3DSceneSource *)sceneSourceRef;
- (id)c3dDataRepresentation;
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;
- (id)entryWithID:(id)arg1 withClass:(Class)arg2;
- (id)IDsOfEntriesWithClass:(Class)arg1;
- (long long)sourceStatus;
- (_Bool)canExportToColladaWithNoDataLoss;
- (id)performConsistencyCheck;
- (id)debugQuickLookData;

@end
