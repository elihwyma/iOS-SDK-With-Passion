/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFUberProductPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (Class)singleStateClass;

@end
