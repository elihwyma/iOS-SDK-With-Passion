/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class CLAPIEngine, NSString;

@interface WFCloudAppUploadAction : WFAction

{
    CLAPIEngine *_engine;
}

@property (retain, nonatomic) CLAPIEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)fileUploadDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)linkBookmarkDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;

@end
