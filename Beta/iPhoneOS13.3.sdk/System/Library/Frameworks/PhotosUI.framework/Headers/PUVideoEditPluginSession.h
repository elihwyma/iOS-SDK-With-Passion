/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUEditPluginSession.h>

__attribute__((visibility("hidden")))
@interface PUVideoEditPluginSession : PUEditPluginSession

{
    _Bool _allowLoopingVideoExtensions;
}

@property (nonatomic) _Bool allowLoopingVideoExtensions;

- (unsigned long long)pluginManagerMediaType;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (id)videoDataSource;

@end
