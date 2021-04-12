//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(readonly, nonatomic) NSDictionary *enumNamesToLabels; // @synthesize enumNamesToLabels=_enumNamesToLabels;
@property(readonly, nonatomic) NSDictionary *keysToEnumNames; // @synthesize keysToEnumNames=_keysToEnumNames;
@property(readonly, nonatomic) NSDictionary *enumNamesToKeys; // @synthesize enumNamesToKeys=_enumNamesToKeys;
@property(readonly, nonatomic) INCodableEnumAttribute *enumAttribute; // @synthesize enumAttribute=_enumAttribute;
// - (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

