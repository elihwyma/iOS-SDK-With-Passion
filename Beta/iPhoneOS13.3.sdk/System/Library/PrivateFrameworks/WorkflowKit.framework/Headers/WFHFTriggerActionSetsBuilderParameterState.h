/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class HFTriggerActionSetsBuilder, NSArray, NSString;

@interface WFHFTriggerActionSetsBuilderParameterState : NSObject

{
    NSString *_homeIdentifier;
    NSArray *_serializedActionSets;
}

@property (copy, nonatomic, readonly) NSString *homeIdentifier;
@property (copy, nonatomic, readonly) NSArray *serializedActionSets;
@property (nonatomic, readonly) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithTriggerActionSetsBuilder:(id)arg1;

@end
