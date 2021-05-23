/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WFTableTemplateParameterState : NSObject

{
    _Bool _requiresBoundedDate;
    long long _compoundType;
    NSArray *_rows;
}

@property (nonatomic, readonly) long long compoundType;
@property (copy, nonatomic, readonly) NSArray *rows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)processingValueClass;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithCompoundType:(long long)arg1 rows:(id)arg2;
- (id)actualCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCompoundType:(long long)arg1 rows:(id)arg2 requiresBoundedDate:(_Bool)arg3;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4;
- (id)stateBySettingCompoundType:(long long)arg1;
- (id)stateByReplacingRowAtIndex:(unsigned long long)arg1 withState:(id)arg2;
- (id)stateByRemovingRowAtIndex:(unsigned long long)arg1;
- (id)stateByAddingRow:(id)arg1;

@end
