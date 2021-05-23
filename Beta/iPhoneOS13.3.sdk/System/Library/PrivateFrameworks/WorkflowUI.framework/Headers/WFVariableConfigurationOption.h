/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFVariableConfigurationOption : NSObject

{
    NSString *_label;
    id _value;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) id value;

- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end
