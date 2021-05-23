/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <BaseBoardUI/BSUIMappedImageCache.h>

@interface SBFMappedImageCache : BSUIMappedImageCache

+ (id)systemAppPersistenteCache;

- (id)initWithDescription:(id)arg1;
- (id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg2;
- (id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg3;
- (id)imageForKey:(id)arg1 options:(int)arg2;
- (id)imageForKey:(id)arg1 cacheOptions:(unsigned long long)arg2 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg3;
- (void)warmupImageForKey:(id)arg1;

@end
