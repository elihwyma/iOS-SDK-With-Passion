/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class INCodableEnumAttribute, NSArray, NSDictionary;

@interface WFCustomIntentEnumerationParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    INCodableEnumAttribute *_enumAttribute;
    NSDictionary *_enumNamesToKeys;
    NSDictionary *_keysToEnumNames;
    NSDictionary *_enumNamesToLabels;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) INCodableEnumAttribute *enumAttribute;
@property (nonatomic, readonly) NSDictionary *enumNamesToKeys;
@property (nonatomic, readonly) NSDictionary *keysToEnumNames;
@property (nonatomic, readonly) NSDictionary *enumNamesToLabels;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;

@end
