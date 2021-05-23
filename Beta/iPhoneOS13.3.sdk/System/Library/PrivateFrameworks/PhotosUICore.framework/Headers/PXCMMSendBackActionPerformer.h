/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMContext;

@interface PXCMMSendBackActionPerformer : PXCMMActionPerformer

{
    PXCMMContext *_sendBackContext;
}

@property (retain, nonatomic) PXCMMContext *sendBackContext;

- (id)performSendBackActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_completeSendBackActionWithSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
