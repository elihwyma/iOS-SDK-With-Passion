/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFComposeViewSizing : NSObject

+ (double)moduleWidthForViewSize:(struct CGSize)arg1 maximumContentWidth:(double)arg2 maximumModuleWidth:(double)arg3 traitCollection:(id)arg4 safeAreaInsets:(struct UIEdgeInsets)arg5;
+ (struct UIEdgeInsets)moduleHorizontalInsetWithTraitCollection:(id)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
+ (double)constrainMaximumContentWidth:(double)arg1 toSize:(struct CGSize)arg2 traitCollection:(id)arg3;
+ (struct CGSize)drawerSizeFromParentSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 traitCollection:(id)arg3;
+ (struct CGSize)workflowViewSizeFromParentSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 traitCollection:(id)arg3;
+ (struct CGSize)sizeForRequestType:(unsigned long long)arg1 parentSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3 traitCollection:(id)arg4;

@end
