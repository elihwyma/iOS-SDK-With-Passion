/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntentDescription, NSArray, NSString;

@interface WFHandleSystemIntentAction : WFHandleIntentAction

{
    int _token;
    INIntentDescription *_intentDescription;
    NSArray *_supportedAppIdentifiers;
    NSArray *_supportedIdentifiers;
}

@property (nonatomic, readonly) int token;
@property (nonatomic, readonly) NSArray *supportedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)appIdentifier;
- (long long)intentCategory;
- (id)intentDescription;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)generatedIntentWithInput:(id)arg1 error:(id *)arg2;
- (id)slots;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)actionForAppIdentifier:(id)arg1;
- (id)supportedAppIdentifiers;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)appIdentifierForIdentifier:(id)arg1;
- (void)selectedAppDidChange;
- (id)appSection;

@end
