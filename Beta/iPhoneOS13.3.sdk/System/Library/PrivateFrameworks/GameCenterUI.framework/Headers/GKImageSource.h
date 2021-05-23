/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKImageBrush, GKThreadsafeCache, NSString, UIImage;

@interface GKImageSource : NSObject

{
    _Bool _shouldRenderDefaultImageWithBrush;
    GKThreadsafeCache *_cache;
    NSString *_name;
    GKImageBrush *_imageBrush;
    UIImage *_defaultImage;
    UIImage *_renderedDefaultImage;
}

@property (retain, nonatomic) UIImage *renderedDefaultImage;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) GKImageBrush *imageBrush;
@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) _Bool shouldRenderDefaultImageWithBrush;
@property (retain, nonatomic) GKThreadsafeCache *cache;

+ (void)clearCache;
+ (id)sharedCache;
+ (id)syncQueue;
+ (id)cacheDirectoryForImageID:(id)arg1;

- (void)dealloc;
- (id)cachedImageForKey:(id)arg1;
- (id)keyForImageIdentifier:(id)arg1;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize)arg2 returnContext:(id *)arg3;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id *)arg2;
- (id)renderedImageWithImage:(id)arg1;
- (_Bool)shouldUseTestImage;
- (id)renderedTestImage;
- (id)fastCachedImageForKey:(id)arg1;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (void)validateFileSystemCache;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (void)_storeImage:(id)arg1 cacheKey:(id)arg2 path:(id)arg3 context:(id)arg4;
- (id)subsourceWithBrush:(id)arg1;
- (unsigned long long)cacheCostForImage:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (void)cacheImageFromContext:(id)arg1 forIdentifier:(id)arg2;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3;
- (void)clearCachedImageForIdentifier:(id)arg1;

@end
