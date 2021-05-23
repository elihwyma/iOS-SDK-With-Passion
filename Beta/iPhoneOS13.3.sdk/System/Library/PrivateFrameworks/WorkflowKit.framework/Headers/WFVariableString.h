/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface WFVariableString : NSObject <Swift>

{
    NSArray *_stringsAndVariables;
}

@property (nonatomic, readonly) NSArray *stringsAndVariables;
@property (nonatomic, readonly) NSArray *variables;
@property (nonatomic, readonly) NSString *stringByRemovingVariables;
@property (nonatomic, readonly) NSString *stringByReplacingVariablesWithNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)dictionaryIsSerializedVariableString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithVariable:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithStringsAndVariables:(id)arg1;
- (id)initWithAttachmentCharacterString:(id)arg1 variableGetter:(CDUnknownBlockType)arg2;
- (void)processWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processIntoContentItemsWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processIntoStringsAndAttachmentsWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)variablesOfType:(id)arg1;
- (_Bool)representsSingleContentVariable;
- (void)addVariableDelegate:(id)arg1;
- (void)removeVariableDelegate:(id)arg1;

@end
