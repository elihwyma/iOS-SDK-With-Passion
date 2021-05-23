/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/ICDocumentAction.h>

@class WFFileRepresentation;

@interface ICPostToInstagramAction : ICDocumentAction

{
    WFFileRepresentation *_instagramRepresentation;
}

@property (retain, nonatomic) WFFileRepresentation *instagramRepresentation;

- (void)dealloc;
- (id)inputContentClasses;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)appDidResume:(id)arg1;
- (void)shareAsALAssetWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)shareAsImageFileWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;

@end
