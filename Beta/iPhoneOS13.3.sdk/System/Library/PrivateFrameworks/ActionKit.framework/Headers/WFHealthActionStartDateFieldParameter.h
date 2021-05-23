/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFDateFieldParameter.h>

@class HKSampleType;

@interface WFHealthActionStartDateFieldParameter : WFDateFieldParameter

{
    HKSampleType *_sampleType;
}

@property (retain, nonatomic) HKSampleType *sampleType;

- (id)localizedLabel;

@end
