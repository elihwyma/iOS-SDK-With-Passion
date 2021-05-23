/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface SCNAssetCatalog : NSObject

{
    NSURL *_catalogURL;
    NSDictionary *_db;
    NSMutableDictionary *_cache;
}

@property (nonatomic, readonly) NSURL *catalogURL;

+ (void)clearCache;
+ (id)assetCatalogWithURL:(id)arg1;
+ (id)objectWithName:(id)arg1 class:(Class)arg2;
+ (id)assetCatalogForResourceURL:(id)arg1;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)assetCatalogNamed:(id)arg1;

- (void)dealloc;
- (id)sceneWithURL:(id)arg1;
- (id)animationNamed:(id)arg1;
- (id)actionNamed:(id)arg1;
- (id)particleSystemNamed:(id)arg1;
- (id)sceneNamed:(id)arg1;
- (void)cacheObject:(id)arg1 withTimestamp:(double)arg2 forKey:(id)arg3;
- (id)URLOfResourceNamed:(id)arg1;
- (id)pathByMakingURLRelativeToCatalog:(id)arg1;

@end
