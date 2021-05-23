/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKQuantityType, NSArray, NSObject;

@protocol OS_dispatch_group;

@interface WFQuantityUnitPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    HKQuantityType *_quantityType;
    NSObject<OS_dispatch_group> *_possibleStateLoadingGroup;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *possibleStateLoadingGroup;
@property (retain, nonatomic) HKQuantityType *quantityType;

- (id)initWithDefinition:(id)arg1;
- (id)possibleStates;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (void)updatePossibleStates;

@end
