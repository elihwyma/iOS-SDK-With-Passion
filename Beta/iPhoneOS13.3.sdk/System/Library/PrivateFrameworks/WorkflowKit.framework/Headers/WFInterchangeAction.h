/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@class ICAction, NSArray;

@interface WFInterchangeAction : WFAction

{
    ICAction *_interchangeAction;
    NSArray *_contentClasses;
}

@property (retain, nonatomic) NSArray *contentClasses;
@property (nonatomic, readonly) _Bool requiresCallback;
@property (nonatomic, readonly) ICAction *interchangeAction;

- (id)description;
- (id)name;
- (id)keywords;
- (id)creationDate;
- (id)categories;
- (id)lastModifiedDate;
- (id)shortName;
- (id)app;
- (_Bool)isDiscontinued;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)outputContentClasses;
- (_Bool)inputRequired;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (_Bool)skipsProcessingHiddenParameters;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)inputContentClasses;
- (_Bool)outputsMultipleItems;
- (id)descriptionDictionary;
- (_Bool)inputsMultipleItems;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)parameterSummary;
- (id)inputParameterKey;
- (id)unsupportedEnvironments;
- (_Bool)inputPassthrough;
- (id)subcategoryForCategory:(id)arg1;
- (id)userInterfaceTypes;
- (id)requiredResources;
- (_Bool)neverSuggested;
- (id)initWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (id)initWithInterchangeAction:(id)arg1 identifier:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4;
- (_Bool)shouldSuppressCallback;
- (_Bool)callbackIsCurrentlyDisabled;
- (_Bool)mappedValueIsTrue:(id)arg1 forContentMapping:(id)arg2;

@end
