/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary

{
    VUIMPMediaLibrary *_mediaLibrary;
}

@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary;

+ (_Bool)_isUpdateInProgress;
+ (_Bool)_isInitialUpdateInProgress;

- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)title;
- (_Bool)isUpdating;
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1;
- (_Bool)isInitialUpdateInProgress;
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateFromCloudWithReason:(long long)arg1;

@end
