/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSString;

@protocol WFParameterState;

@interface WFPropertyListParameterValue : NSObject <Swift>

{
    long long _valueType;
    id <WFParameterState> _state;
}

@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) id <WFParameterState> state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)classForValueType:(long long)arg1;
+ (id)defaultStateForValueType:(long long)arg1;
+ (Class)processedClassForValueType:(long long)arg1;
+ (id)localizedTitleForValueType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithNumber:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithType:(long long)arg1 state:(id)arg2;
- (id)initWithStringState:(id)arg1;
- (id)initWithDictionaryState:(id)arg1;
- (id)initWithArrayState:(id)arg1;
- (id)initWithNumberState:(id)arg1;
- (id)initWithBooleanState:(id)arg1;
- (id)initWithBoolean:(id)arg1;

@end
