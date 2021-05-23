/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSString, WFPropertyListParameterValue, WFVariableString;

@interface WFDictionaryParameterKeyValuePair : NSObject <Swift>

{
    WFVariableString *_key;
    WFPropertyListParameterValue *_value;
}

@property (nonatomic, readonly) WFVariableString *key;
@property (nonatomic, readonly) WFPropertyListParameterValue *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)containedVariables;
- (void)getProcessedPair:(CDUnknownBlockType)arg1 variableSource:(id)arg2 parameter:(id)arg3 userInputRequiredHandler:(CDUnknownBlockType)arg4;

@end
