/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class NSError;

@protocol WFComponentNavigationContext;

@interface WFModuleResourceWarningComponent : CKCompositeComponent

{
    NSError *_resourceError;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithResourceError:(id)arg1 navigationContext:(id)arg2 useImportStyle:(_Bool)arg3 importButtonGradient:(id)arg4;

- (void)recoverFromWarning:(id)arg1 buttonIndex:(unsigned long long)arg2;

@end
