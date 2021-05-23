/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSDate;

@interface WFDatePickerParameter : WFParameter

{
    long long _datePickerMode;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
}

@property (nonatomic) long long datePickerMode;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;

@end
