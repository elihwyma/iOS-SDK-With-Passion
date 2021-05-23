/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFGranularAccessResource.h>

@class HKHealthStore, NSString, WFAction;

@interface WFHealthKitAccessResource : WFGranularAccessResource

{
    unsigned long long _globalLevelStatus;
    WFAction *_action;
    HKHealthStore *_healthStore;
}

@property (weak, nonatomic) WFAction *action;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSystemResource;
+ (Class)perWorkflowStateClass;
+ (_Bool)alwaysMakeAvailable;

- (id)initWithDefinition:(id)arg1;
- (void)refreshAvailability;
- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)associatedAppIdentifier;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestedEntries;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (id)objectTypes;
- (id)objectTypesForAccessType:(id)arg1;
- (id)readTypes;
- (id)writeTypes;
- (id)readableUnauthorizedResourceDescription;

@end
