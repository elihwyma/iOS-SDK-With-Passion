/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponent.h>

@interface WFModuleIndentationComponent : CKComponent

{
    CKComponent *_component;
    unsigned long long _indentationLevel;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithIndentationLevel:(unsigned long long)arg1 component:(id)arg2;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end
