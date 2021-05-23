/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFNumberFieldParameter.h>

@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter

{
    NSArray *_possibleUnits;
}

@property (copy, nonatomic) NSArray *possibleUnits;

+ (_Bool)defaultAllowsNegativeNumbers;
+ (_Bool)defaultAllowsDecimalNumbers;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;

@end
