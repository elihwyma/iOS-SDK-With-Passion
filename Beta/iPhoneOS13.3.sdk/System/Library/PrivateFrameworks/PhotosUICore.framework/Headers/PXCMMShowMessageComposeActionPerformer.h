/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer

{
    NSURL *_shareURL;
}

@property (nonatomic, readonly) NSURL *shareURL;

- (id)performActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performMessageComposeActionWithSession:(id)arg1 shareURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
