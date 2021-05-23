/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WFConditionalSubjectParameterState : NSObject

{
    _Bool _caseInsensitive;
    _Bool _irrational;
    _Bool _enumeration;
    NSNumber *_maximumLength;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    unsigned long long _tense;
    unsigned long long _displayableTimeUnits;
    unsigned long long _comparableTimeUnits;
    NSString *_unitType;
    NSString *_homeIdentifier;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSNumber *maximumLength;
@property (nonatomic, readonly, getter=isCaseInsensitive) _Bool caseInsensitive;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *stepValue;
@property (nonatomic, readonly, getter=isIrrational) _Bool irrational;
@property (nonatomic, readonly) unsigned long long tense;
@property (nonatomic, readonly) unsigned long long displayableTimeUnits;
@property (nonatomic, readonly) unsigned long long comparableTimeUnits;
@property (nonatomic, readonly) NSString *unitType;
@property (nonatomic, readonly, getter=isEnumeration) _Bool enumeration;
@property (copy, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)processingValueClass;
+ (id)subjectType;
+ (id)subjectClasses;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVariable:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)getContentWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithHomeIdentifier:(id)arg1;
- (id)supportedComparisonOperators;

@end
