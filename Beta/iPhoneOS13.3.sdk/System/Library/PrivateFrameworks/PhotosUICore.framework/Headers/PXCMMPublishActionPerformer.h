/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer

{
    NSURL *_publishedURL;
}

@property (retain, nonatomic) NSURL *publishedURL;

- (_Bool)isCancellable;
- (void)cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createActionProgress;
- (id)performPublishActionWithSession:(id)arg1 shareOrigin:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_completePublishActionWithSuccess:(_Bool)arg1 error:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
