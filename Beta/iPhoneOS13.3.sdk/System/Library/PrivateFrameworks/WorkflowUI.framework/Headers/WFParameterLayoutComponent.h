/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponent.h>

@class CKInsetComponent, NSArray, NSString;

@interface WFParameterLayoutComponent : CKComponent

{
    NSString *_label;
    NSArray *_labelsToAlignTo;
    CKInsetComponent *_labelComponent;
    struct WFParameterLayoutComponentStyle _style;
    struct WFCompressionResistance _controlResistance;
    CKComponent *_controlComponent;
    CKTypedComponentAction_789af415 _selectionAction;
}

@property (nonatomic, readonly) CKComponent *controlComponent;
@property (nonatomic, readonly) CKTypedComponentAction_789af415 selectionAction;

+ (struct UIEdgeInsets)edgeInsets;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 selectionAction:(CKTypedComponentAction_789af415)arg3 selectionEnabled:(_Bool)arg4 style:(const struct WFParameterLayoutComponentStyle *)arg5 accessibility:(const struct WFParameterLayoutComponentAccessibility *)arg6 controlResistance:(const struct WFCompressionResistance *)arg7 controlComponent:(id)arg8;

- (id).cxx_construct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;
- (void)handleParameterLayoutPressed;

@end
