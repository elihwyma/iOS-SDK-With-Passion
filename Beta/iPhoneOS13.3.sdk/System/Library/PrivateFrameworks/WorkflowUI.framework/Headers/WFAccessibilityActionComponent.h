/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFAccessibilityActionComponent : CKCompositeComponent

{
    CKComponent *_componentToActivate;
}

@property (nonatomic, readonly) CKComponent *componentToActivate;

+ (id)newWithAttributes:(const unordered_map_b2cee720 *)arg1 componentToActivate:(id)arg2 component:(id)arg3;

@end
