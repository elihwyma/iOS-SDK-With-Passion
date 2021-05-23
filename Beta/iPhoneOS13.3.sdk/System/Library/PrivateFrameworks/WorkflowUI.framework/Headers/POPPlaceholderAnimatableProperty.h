/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPAnimatableProperty.h>

@class NSString;

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty

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

@end
