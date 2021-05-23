/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFDateFieldParameter.h>

@class HKSampleType;

@interface WFHealthActionEndDateFieldParameter : WFDateFieldParameter

{
    HKSampleType *_sampleType;
}

@property (retain, nonatomic) HKSampleType *sampleType;

- (_Bool)isHidden;

@end
