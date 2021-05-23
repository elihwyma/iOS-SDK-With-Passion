/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKCenterLayoutComponent : CKComponent

{
    unsigned long long _centeringOptions;
    unsigned long long _sizingOptions;
    CKComponent *_child;
}

+ (id)newWithCenteringOptions:(unsigned long long)arg1 sizingOptions:(unsigned long long)arg2 child:(id)arg3 size:(const struct CKComponentSize *)arg4;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
