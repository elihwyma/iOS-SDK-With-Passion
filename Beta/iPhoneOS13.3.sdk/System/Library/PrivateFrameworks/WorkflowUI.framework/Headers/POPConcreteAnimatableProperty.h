/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPAnimatableProperty.h>

@class NSString;

@interface POPConcreteAnimatableProperty : POPAnimatableProperty

{
    NSString *name;
    CDUnknownBlockType readBlock;
    CDUnknownBlockType writeBlock;
    double threshold;
}

- (id)name;
- (double)threshold;
- (CDUnknownBlockType)writeBlock;
- (CDUnknownBlockType)readBlock;
- (id)initWithName:(id)arg1 readBlock:(CDUnknownBlockType)arg2 writeBlock:(CDUnknownBlockType)arg3 threshold:(double)arg4;

@end
