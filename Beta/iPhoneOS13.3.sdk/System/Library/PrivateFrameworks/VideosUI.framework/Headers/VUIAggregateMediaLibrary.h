/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUISidebandMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary

{
    VUIDeviceMediaLibrary *_deviceMediaLibrary;
    VUISidebandMediaLibrary *_sidebandMediaLibrary;
}

@property (nonatomic, readonly) VUIDeviceMediaLibrary *deviceMediaLibrary;
@property (nonatomic, readonly) VUISidebandMediaLibrary *sidebandMediaLibrary;

+ (id)keyPathsForValuesAffectingConnectionState;

- (void)dealloc;
- (id)title;
- (_Bool)isUpdating;
- (unsigned long long)connectionState;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithManager:(id)arg1 deviceMediaLibrary:(id)arg2 sidebandMediaLibrary:(id)arg3;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (_Bool)isInitialUpdateInProgress;
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateFromCloudWithReason:(long long)arg1;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)_deviceMediaLibraryContentsDidChange:(id)arg1;
- (void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg1;

@end
