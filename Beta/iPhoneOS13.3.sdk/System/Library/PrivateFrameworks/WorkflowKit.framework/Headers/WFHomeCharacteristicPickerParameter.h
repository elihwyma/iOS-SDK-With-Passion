/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class HMService, NSArray, NSString;

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    HMService *_service;
    NSString *_homeIdentifier;
}

@property (retain, nonatomic) HMService *service;
@property (copy, nonatomic) NSString *homeIdentifier;
@property (nonatomic, readonly) NSArray *possibleStates;

- (_Bool)isHidden;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (void)setService:(id)arg1 homeIdentifier:(id)arg2;
- (void)updatePossibleStates;

@end
