/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface PUVideoEditPluginDataSource : NSObject

{
    _Bool _allowsRevertInSession;
    PHAsset *_videoAsset;
}

@property (retain, nonatomic) PHAsset *videoAsset;
@property (nonatomic) _Bool allowsRevertInSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (_Bool)editPluginSessionCanRevertToOriginal:(id)arg1;
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;
- (id)initWithVideoAsset:(id)arg1;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;

@end
