/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/ICAction.h>

@class ICShareExtension, NSArray, NSString;

@interface ICShareExtensionAction : ICAction

{
    ICShareExtension *_shareExtension;
}

@property (weak, nonatomic, readonly) ICShareExtension *shareExtension;
@property (nonatomic, readonly) NSString *inputType;
@property (nonatomic, readonly) NSArray *socialTypes;
@property (nonatomic, readonly) NSArray *contentItemClasses;

- (id)name;
- (id)identifier;
- (id)category;
- (_Bool)inputRequired;
- (id)inputContentClasses;
- (id)initWithDefinition:(id)arg1 shareExtension:(id)arg2;
- (id)descriptionDictionary;
- (_Bool)inputsMultipleItems;
- (id)textItemHandling;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)addContentToShareController:(id)arg1 withInput:(id)arg2 parameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
