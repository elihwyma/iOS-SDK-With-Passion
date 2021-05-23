/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionPerformer.h>

@class NSProgress, PXCMMSession;

@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionPerformer : PXActionPerformer

{
    PXCMMSession *_session;
    NSProgress *_progress;
}

@property (nonatomic, readonly) PXCMMSession *session;
@property (retain, nonatomic) NSProgress *progress;
@property (weak, nonatomic) id <PXCMMActionPerformerDelegate> delegate;

- (_Bool)canPerformActionWithSession:(id)arg1;
- (id)createActionProgress;
- (id)performActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
