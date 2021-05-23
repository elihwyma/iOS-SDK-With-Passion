/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFQuantityFieldParameter.h>

@class HKQuantityType, NSArray, NSString, WFAction;

@interface WFHealthQuantityFieldParameter : WFQuantityFieldParameter

{
    NSArray *_possibleUnits;
    HKQuantityType *_quantityType;
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isHidden;
- (id)localizedLabel;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)attributesDidChange;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)setPossibleUnits:(id)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (id)possibleUnits;
- (void)updatePossibleUnits;

@end
