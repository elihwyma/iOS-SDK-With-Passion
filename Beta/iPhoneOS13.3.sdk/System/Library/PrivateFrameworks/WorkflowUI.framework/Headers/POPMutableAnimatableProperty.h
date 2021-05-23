/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPAnimatableProperty.h>

@class NSString;

@interface POPMutableAnimatableProperty : POPAnimatableProperty

{
    NSString *name;
    CDUnknownBlockType readBlock;
    CDUnknownBlockType writeBlock;
    double threshold;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CDUnknownBlockType readBlock;
@property (copy, nonatomic) CDUnknownBlockType writeBlock;
@property (nonatomic) double threshold;

@end
