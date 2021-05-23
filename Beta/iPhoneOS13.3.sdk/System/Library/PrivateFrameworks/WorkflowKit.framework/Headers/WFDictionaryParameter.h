/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSSet, NSString;

@interface WFDictionaryParameter : WFParameter

{
    NSString *_localizedItemTypeName;
    NSString *_localizedNewItemTypeName;
    NSSet *_allowedValueTypes;
}

@property (nonatomic, readonly) NSString *localizedItemTypeName;
@property (nonatomic, readonly) NSString *localizedNewItemTypeName;
@property (nonatomic, readonly) NSSet *allowedValueTypes;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;

@end
