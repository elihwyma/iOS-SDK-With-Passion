/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPAnimatableProperty.h>

@interface POPStaticAnimatableProperty : POPAnimatableProperty

{
    struct {
        id _field1;
        CDUnknownBlockType _field2;
        CDUnknownBlockType _field3;
        double _field4;
    } *_state;
}

- (id)name;
- (double)threshold;
- (CDUnknownBlockType)writeBlock;
- (CDUnknownBlockType)readBlock;

@end
