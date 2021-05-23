/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSNumber, NSString;

@interface WFStepperParameter : WFParameter

{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSString *_singularNoun;
    NSString *_pluralNoun;
}

@property (copy, nonatomic, readonly) NSString *singularNoun;
@property (copy, nonatomic, readonly) NSString *pluralNoun;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (copy, nonatomic, readonly) NSString *localizedLabelFormatString;

- (id)initWithDefinition:(id)arg1;
- (id)localizedLabel;
- (Class)singleStateClass;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelWithState:(id)arg1 includingPrefix:(_Bool)arg2;

@end
