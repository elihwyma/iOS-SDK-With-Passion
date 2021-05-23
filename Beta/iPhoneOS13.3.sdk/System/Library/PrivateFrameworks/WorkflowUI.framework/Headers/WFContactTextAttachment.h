/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFValueTextAttachment.h>

@class WFContact;

@interface WFContactTextAttachment : WFValueTextAttachment

{
    WFContact *_value;
}

@property (retain, nonatomic) WFContact *value;

- (id)accessibilityLabel;
- (id)valueName;

@end
