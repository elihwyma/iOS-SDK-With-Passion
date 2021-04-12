//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class NSArray, NSDictionary, NSObject, NSSet, NSString, WFTextTokenChooser, WFVariable;
@protocol NSCopying, WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFRowTemplateItemEnumerationComponent : CKCompositeComponent
{
    id /* CDUnknownBlockType */ _updateBlock;
    NSArray *_possibleValues;
    NSObject<NSCopying> *_selectedValue;
    WFVariable *_variable;
    NSDictionary *_labelMapping;
    NSString *_prompt;
    NSSet *_allowedVariableTypes;
    BOOL _variablesDisabled;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
    WFTextTokenChooser *_textTokenChooser;
}

+ (id)newWithPossibleValues:(id)arg1 labels:(id)arg2 selectedValue:(id)arg3 prompt:(id)arg4 identifier:(id)arg5 updateBlock:(id /* CDUnknownBlockType */)arg6 options:(struct WFRowTemplateItemEnumerationComponentOptions)arg7 size:(const struct CKComponentSize )arg8 variableProvider:(id)arg9 variableUIDelegate:(id)arg10 navigationContext:(id)arg11;
// - (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;

@end

