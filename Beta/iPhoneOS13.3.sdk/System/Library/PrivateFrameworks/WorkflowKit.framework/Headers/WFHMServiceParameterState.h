/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class HMService, NSDictionary, NSString;

@interface WFHMServiceParameterState : NSObject

{
    HMService *_service;
    NSString *_homeIdentifier;
    NSDictionary *_serializedService;
}

@property (retain, nonatomic) NSDictionary *serializedService;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (nonatomic, readonly) HMService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithService:(id)arg1 homeIdentifier:(id)arg2;

@end
