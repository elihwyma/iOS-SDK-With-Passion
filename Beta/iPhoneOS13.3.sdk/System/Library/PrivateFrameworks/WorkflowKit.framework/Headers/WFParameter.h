/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, NSSet, NSString, WFResourceManager;

@interface WFParameter : NSObject

{
    _Bool _hidden;
    _Bool _doNotLocalizeValues;
    _Bool _insideWorkflow;
    _Bool _supportsImportQuestions;
    _Bool _allowsMultipleValues;
    _Bool _shouldAlignLabels;
    NSSet *_supportedVariableTypes;
    NSString *_key;
    NSString *_localizedLabel;
    NSString *_localizedPlaceholder;
    NSString *_localizedDescription;
    id _defaultSerializedRepresentation;
    WFResourceManager *_resourceManager;
    NSString *_intentSlotName;
    NSSet *_disallowedVariableTypes;
    NSDictionary *_definition;
    NSHashTable *_eventObservers;
    NSSet *_defaultSupportedVariableTypes;
}

@property (nonatomic, readonly) NSSet *disallowedVariableTypes;
@property (copy, nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSHashTable *eventObservers;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSString *localizedLabel;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) _Bool doNotLocalizeValues;
@property (nonatomic, readonly) NSSet *supportedVariableTypes;
@property (copy, nonatomic, readonly) id defaultSerializedRepresentation;
@property (nonatomic, readonly) WFResourceManager *resourceManager;
@property (nonatomic, readonly, getter=isInsideWorkflow) _Bool insideWorkflow;
@property (nonatomic, readonly) _Bool supportsImportQuestions;
@property (nonatomic, readonly) NSString *intentSlotName;
@property (nonatomic, readonly) _Bool allowsMultipleValues;
@property (nonatomic, readonly) _Bool shouldAlignLabels;

+ (id)allInsertableVariableTypes;
+ (id)parameterWithDefinition:(id)arg1;
+ (id)referencedActionResourceClasses;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (void)addEventObserver:(id)arg1;
- (void)removeEventObserver:(id)arg1;
- (_Bool)parameterStateIsValid:(id)arg1;
- (Class)stateClass;
- (Class)multipleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)attributesDidChange;
- (void)defaultSerializedRepresentationDidChange;
- (void)stateValidityCriteriaDidChange;
- (void)setActionResources:(id)arg1;

@end
