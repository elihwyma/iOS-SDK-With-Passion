/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSNumber, WFImage;

@interface WFSliderParameter : WFParameter

{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (nonatomic, readonly) WFImage *minimumIcon;
@property (nonatomic, readonly) WFImage *maximumIcon;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSerializedRepresentation;
- (_Bool)shouldAlignLabels;

@end
