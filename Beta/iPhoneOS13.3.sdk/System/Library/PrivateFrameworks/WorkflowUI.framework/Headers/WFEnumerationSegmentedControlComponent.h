/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponent.h>

@class WFEnumerationParameter;

@interface WFEnumerationSegmentedControlComponent : CKComponent

{
    WFEnumerationParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4;
+ (double)minimumWidthForSegmentWithTitle:(id)arg1;
+ (double)perSegmentWidthWithSegments:(id)arg1;
+ (double)estimatedWidthWithSegments:(id)arg1;

- (void)segmentedControlSelectedSegmentChanged:(id)arg1;

@end
