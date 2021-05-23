/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/ICAction.h>

@class ICScheme, NSString;

@interface ICSchemeAction : ICAction

{
    ICScheme *_scheme;
}

@property (nonatomic, readonly) NSString *formatString;
@property (weak, nonatomic, readonly) ICScheme *scheme;
@property (nonatomic, readonly, getter=isCallbackAction) _Bool callbackAction;

- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)initWithDefinition:(id)arg1 scheme:(id)arg2;
- (id)formatKeys;
- (id)defersCompletionUntilReturn;

@end
