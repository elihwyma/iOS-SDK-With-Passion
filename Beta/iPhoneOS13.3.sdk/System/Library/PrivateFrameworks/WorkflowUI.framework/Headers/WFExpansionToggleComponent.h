/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFExpansionToggleComponent : CKCompositeComponent

{
    _Bool _expanded;
    CKTypedComponentAction_58381653 _toggleAction;
    CKComponent *_disclosureComponent;
}

+ (id)newWithLabel:(id)arg1 hintLabel:(id)arg2 labelsToAlignTo:(id)arg3 disclosureImage:(id)arg4 toggleAction:(CKTypedComponentAction_58381653)arg5 expanded:(_Bool)arg6 style:(const struct WFParameterLayoutComponentStyle *)arg7;

- (id).cxx_construct;
- (void)toggleChanged;

@end
