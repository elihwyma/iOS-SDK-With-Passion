//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFResource.h>

#import <WorkflowKit/WFWorkflowReferencingResource-Protocol.h>

@class NSDictionary, NSError, NSString, WFDatabase, WFImage, WFWorkflow;
@protocol NSObject, WFAccessResourcePerWorkflowState;

@interface WFAccessResource : WFResource <WFWorkflowReferencingResource>
{
    WFWorkflow *_workflow;
    id <WFAccessResourcePerWorkflowState> _currentPerWorkflowState;
    NSString *_persistentIdentifier;
    id <NSObject> _resourceAvailabilityChangedNotificationObserver;
}

+ (Class)perWorkflowStateClass;
+ (BOOL)isSystemResource;
+ (id)accessResourceFromDatabaseState:(id)arg1;
@property(readonly, nonatomic) id <NSObject> resourceAvailabilityChangedNotificationObserver; // @synthesize resourceAvailabilityChangedNotificationObserver=_resourceAvailabilityChangedNotificationObserver;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(retain, nonatomic) id <WFAccessResourcePerWorkflowState> currentPerWorkflowState; // @synthesize currentPerWorkflowState=_currentPerWorkflowState;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
// - (void).cxx_destruct;
- (id)localizedAttemptRecoveryFromErrorMessage;
@property(readonly, nonatomic) NSString *attemptRecoveryFromGlobalLevelErrorMessage;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(NSUInteger)arg2 userInterface:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
@property(readonly, nonatomic) NSString *workflowLevelDeniedStatusMessage;
@property(readonly, nonatomic) NSString *workflowLevelNotDeterminedStatusMessage;
@property(readonly, nonatomic) NSString *workflowLevelMessageTemplate;
@property(readonly, nonatomic) NSString *workflowLevelPromptTemplate;
@property(readonly, nonatomic) NSError *computedAvailabilityError;
@property(readonly, nonatomic) NSError *globalLevelAvailabilityError;
@property(readonly, nonatomic) NSError *workflowLevelAvailabilityError;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(NSUInteger)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)errorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelDeniedStatusMessage;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelNotDeterminedStatusMessage;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelMessageTemplate;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelPromptTemplate;
- (id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2;
@property(readonly, nonatomic) NSUInteger workflowLevelStatus;
@property(readonly, nonatomic) NSUInteger globalLevelStatus;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setAuthorizedAtWorkflowLevel:(BOOL)arg1 forReference:(id)arg2 inDatabase:(id)arg3 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg4;
- (void)persistPerWorkflowState:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3;
- (void)refreshCurrentPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)refreshCurrentPerWorkflowState;
- (id)loadPersistedPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)attemptRecoveryFromWorkflowLevelErrorWithOptionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) WFDatabase *database;
- (BOOL)isEquivalentToAccessResource:(id)arg1;
- (void)setAuthorizedAtWorkflowLevel:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2;
- (void)makeAvailableAtLevel:(NSUInteger)arg1 withUserInterface:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)availabilityErrorForLevel:(NSUInteger)arg1;
- (NSUInteger)statusAtLevel:(NSUInteger)arg1;
- (void)makeAvailableAtWorkflowLevelWithUserInterface:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)refreshAvailability;
- (void)refreshAvailabilityWithNotification:(BOOL)arg1;
@property(readonly, nonatomic) NSUInteger status;
@property(readonly, nonatomic) NSString *protectedResourceDescription;
@property(readonly, nonatomic) WFImage *icon;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *associatedAppIdentifier;
- (void)dealloc;
- (id)initWithPersistentIdentifier:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2;
@property(readonly, nonatomic) NSDictionary *settingsUIDefinition;
- (void)logOut;
@property(readonly, nonatomic) BOOL logOutAffectsOtherApps;
@property(readonly, nonatomic) BOOL canLogOut;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *resourceName;

@end

