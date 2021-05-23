/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@interface VUIAppIconImageService : NSObject

+ (id)_cachePath;
+ (double)iconCornerRadiusForSize:(struct CGSize)arg1;
+ (void)fetchIconForInstallable:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_keyForInstallable:(id)arg1 size:(struct CGSize)arg2;
+ (id)_cachedImageForKey:(id)arg1;
+ (id)_imageURLForInstallable:(id)arg1 size:(struct CGSize)arg2;
+ (void)_cacheImage:(id)arg1 forKey:(id)arg2;
+ (id)_MD5StringForString:(id)arg1;

@end
