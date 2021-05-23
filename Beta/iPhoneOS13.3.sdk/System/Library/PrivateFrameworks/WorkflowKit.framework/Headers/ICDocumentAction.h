/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/ICAction.h>

@class NSArray;

@interface ICDocumentAction : ICAction

{
    NSArray *_inputContentClasses;
    NSArray *_fileTypes;
}

@property (nonatomic, readonly) NSArray *fileTypes;

- (id)name;
- (id)identifier;
- (id)inputContentClasses;
- (id)descriptionDictionary;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)fileTypeForOpeningItem:(id)arg1;

@end
