/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject

{
    double _scale;
    CPBitmapStore *_store;
    NSCache *_conditionImagesCache;
}

@property (retain, nonatomic) CPBitmapStore *store;
@property (retain, nonatomic) NSCache *conditionImagesCache;

+ (id)sharedImageLoader;
+ (void)preloadImages;
+ (id)conditionImageNamed:(id)arg1 style:(long long)arg2;
+ (id)conditionImageNameWithConditionIndex:(long long)arg1;
+ (id)conditionImageWithConditionIndex:(long long)arg1;
+ (id)conditionImageBundle;
+ (id)conditionImageNamed:(id)arg1 size:(struct CGSize)arg2 cloudAligned:(_Bool)arg3 stroke:(_Bool)arg4 strokeAlpha:(double)arg5 lighterColors:(_Bool)arg6;
+ (id)colorForImageColor:(id)arg1 lighter:(_Bool)arg2;
+ (void)cacheImageIfNecessary:(id)arg1;
+ (id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2;
+ (id)cachedImageNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)init;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;

@end
