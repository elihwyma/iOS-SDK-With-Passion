/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUEditPluginSession.h>

__attribute__((visibility("hidden")))
@interface PUImageEditPluginSession : PUEditPluginSession

{
    _Bool _allowLivePhotoExtensions;
}

@property (nonatomic) _Bool allowLivePhotoExtensions;

- (unsigned long long)pluginManagerMediaType;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (void)shouldLaunchPlugin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageDataSource;

@end
