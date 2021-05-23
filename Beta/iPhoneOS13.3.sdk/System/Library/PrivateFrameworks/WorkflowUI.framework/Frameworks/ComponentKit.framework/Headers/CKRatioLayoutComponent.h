/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKRatioLayoutComponent : CKComponent

{
    double _ratio;
    CKComponent *_component;
}

+ (id)newWithRatio:(double)arg1 size:(const struct CKComponentSize *)arg2 component:(id)arg3;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
