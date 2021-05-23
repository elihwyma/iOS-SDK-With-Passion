/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class NSURL;

@interface WFModuleFooterComponent : CKCompositeComponent

{
    NSURL *_link;
}

@property (retain, nonatomic) NSURL *link;

+ (id)newWithText:(id)arg1;

- (void)openLink;

@end
