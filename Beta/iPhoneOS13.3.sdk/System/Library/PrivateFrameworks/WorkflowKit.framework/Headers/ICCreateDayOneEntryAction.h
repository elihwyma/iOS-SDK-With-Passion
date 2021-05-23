/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/ICSchemeAction.h>

@interface ICCreateDayOneEntryAction : ICSchemeAction

- (_Bool)inputRequired;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)getImagesFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
