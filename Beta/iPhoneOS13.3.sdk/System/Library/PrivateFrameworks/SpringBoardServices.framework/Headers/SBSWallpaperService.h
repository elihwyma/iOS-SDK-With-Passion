/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class SBSWallpaperClient;

@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject

{
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _wasInvalidated;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(struct CGRect)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2;
- (_Bool)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2;
- (void)restoreDefaultWallpaperWithCompletion:(CDUnknownBlockType)arg1;

@end
