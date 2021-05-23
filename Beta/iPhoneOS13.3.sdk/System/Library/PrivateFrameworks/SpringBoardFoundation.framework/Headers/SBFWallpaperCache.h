/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFMappedImageCache;

@protocol OS_dispatch_queue;

@interface SBFWallpaperCache : NSObject

{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    SBFMappedImageCache *_imageCache;
}

@property (nonatomic, readonly) SBFMappedImageCache *imageCache;

+ (id)wallpaperCache;

- (id)initWithOptions:(id)arg1;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)colorBoxesForKey:(id)arg1 generatingIfNeceesaryFromImage:(id)arg2;
- (void)warmupForKey:(id)arg1;
- (void)removeEverythingWithCompletion:(CDUnknownBlockType)arg1;

@end
