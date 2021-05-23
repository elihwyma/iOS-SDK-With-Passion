/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFResource.h>

@class NSDictionary, NSError, NSString, WFDatabase, WFImage, WFWorkflow;

@protocol NSObject, WFAccessResourcePerWorkflowState;

@interface WFAccessResource : WFResource

{
    WFWorkflow *_workflow;
    id <WFAccessResourcePerWorkflowState> _currentPerWorkflowState;
    NSString *_persistentIdentifier;
    id <NSObject> _resourceAvailabilityChangedNotificationObserver;
}

@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) _Bool canLogOut;
@property (nonatomic, readonly) _Bool logOutAffectsOtherApps;
@property (nonatomic, readonly) NSDictionary *settingsUIDefinition;
@property (nonatomic, readonly) NSError *workflowLevelAvailabilityError;
@property (nonatomic, readonly) NSError *globalLevelAvailabilityError;
@property (nonatomic, readonly) NSError *computedAvailabilityError;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) id <NSObject> resourceAvailabilityChangedNotificationObserver;
@property (nonatomic, readonly) unsigned long long globalLevelStatus;
@property (nonatomic, readonly) unsigned long long workflowLevelStatus;
@property (retain, nonatomic) id <WFAccessResourcePerWorkflowState> currentPerWorkflowState;
@property (nonatomic, readonly) NSString *attemptRecoveryFromGlobalLevelErrorMessage;
@property (nonatomic, readonly) NSString *workflowLevelPromptTemplate;
@property (nonatomic, readonly) NSString *workflowLevelMessageTemplate;
@property (nonatomic, readonly) NSString *workflowLevelNotDeterminedStatusMessage;
@property (nonatomic, readonly) NSString *workflowLevelDeniedStatusMessage;
@property (nonatomic, readonly) NSString *localizedWorkflowLevelPromptTemplate;
@property (nonatomic, readonly) NSString *localizedWorkflowLevelMessageTemplate;
@property (nonatomic, readonly) NSString *localizedWorkflowLevelNotDeterminedStatusMessage;
@property (nonatomic, readonly) NSString *localizedWorkflowLevelDeniedStatusMessage;
@property (nonatomic, readonly) NSString *associatedAppIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) WFImage *icon;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSString *protectedResourceDescription;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) WFWorkflow *workflow;

+ (_Bool)isSystemResource;
+ (Class)perWorkflowStateClass;
+ (id)accessResourceFromDatabaseState:(id)arg1;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)initWithPersistentIdentifier:(id)arg1;
- (void)refreshAvailability;
- (id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)updatedPerWorkflowStateForAuthorizationChoice:(_Bool)arg1 overridingPreviouslyDeterminedAuthorizations:(_Bool)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)refreshAvailabilityWithNotification:(_Bool)arg1;
- (void)logOut;
- (void)makeAvailableAtWorkflowLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)statusAtLevel:(unsigned long long)arg1;
- (id)availabilityErrorForLevel:(unsigned long long)arg1;
- (void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAuthorizedAtWorkflowLevel:(_Bool)arg1 overridingPreviouslyDeterminedAuthorizations:(_Bool)arg2;
- (_Bool)isEquivalentToAccessResource:(id)arg1;
- (void)attemptRecoveryFromWorkflowLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loadPersistedPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)refreshCurrentPerWorkflowState;
- (void)refreshCurrentPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)persistPerWorkflowState:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3;
- (void)setAuthorizedAtWorkflowLevel:(_Bool)arg1 forReference:(id)arg2 inDatabase:(id)arg3 overridingPreviouslyDeterminedAuthorizations:(_Bool)arg4;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedAttemptRecoveryFromErrorMessage;

@end
