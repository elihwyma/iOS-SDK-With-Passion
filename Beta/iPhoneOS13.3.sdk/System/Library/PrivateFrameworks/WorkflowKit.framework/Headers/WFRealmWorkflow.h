/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSArray, NSData, NSDate, NSNumber, NSSet, NSString, RLMArray, RLMLinkingObjects, WFRealmWorkflowIcon, WFRealmWorkflowQuarantine, WFWorkflowIcon, WFWorkflowQuarantine, WFWorkflowTrustedResources;

@protocol WFWorkflowInputClass, WFWorkflowType;

@interface WFRealmWorkflow : RLMObject

{
    _Bool _hiddenFromLibraryAndSync;
    _Bool _hiddenInComplication;
    _Bool _deleted;
    NSString *_workflowID;
    NSDate *_createdAt;
    NSDate *_modifiedAt;
    NSString *_name;
    NSString *_legacyName;
    WFRealmWorkflowIcon *_icon;
    WFRealmWorkflowQuarantine *_quarantine;
    WFWorkflowTrustedResources *_trustedResources;
    RLMArray<WFWorkflowType> *_workflowTypeContainers;
    RLMArray<WFWorkflowInputClass> *_inputClassContainers;
    long long _sortOrdering;
    NSString *_minimumClientVersion;
    NSData *_actionsData;
    NSData *_importQuestionsData;
    NSString *_workflowSubtitle;
    NSString *_actionsDescription;
    NSString *_associatedAppBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_source;
    WFRealmWorkflow *_conflictOf;
    RLMLinkingObjects *_conflictingWorkflows;
    NSString *_lastSavedOnDeviceName;
    long long _lastSyncedHash;
    NSString *_lastMigratedClientVersion;
    long long _remoteQuarantineStatus;
}

@property (copy) NSString *workflowID;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *modifiedAt;
@property (copy) NSString *name;
@property (copy) NSString *legacyName;
@property (retain) WFRealmWorkflowIcon *icon;
@property (retain) WFRealmWorkflowQuarantine *quarantine;
@property _Bool hiddenFromLibraryAndSync;
@property (retain) WFWorkflowTrustedResources *trustedResources;
@property (retain) RLMArray<WFWorkflowType> *workflowTypeContainers;
@property (retain) RLMArray<WFWorkflowInputClass> *inputClassContainers;
@property (getter=isHiddenInComplication) _Bool hiddenInComplication;
@property long long sortOrdering;
@property (copy) NSString *minimumClientVersion;
@property (copy) NSData *actionsData;
@property (copy) NSData *importQuestionsData;
@property (copy) NSString *workflowSubtitle;
@property (copy) NSString *actionsDescription;
@property (copy) NSString *associatedAppBundleIdentifier;
@property (copy) NSString *galleryIdentifier;
@property (copy) NSString *source;
@property (retain) WFRealmWorkflow *conflictOf;
@property (readonly) RLMLinkingObjects *conflictingWorkflows;
@property (copy) NSString *lastSavedOnDeviceName;
@property long long lastSyncedHash;
@property _Bool deleted;
@property (copy) NSString *lastMigratedClientVersion;
@property long long remoteQuarantineStatus;
@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property (nonatomic, readonly) NSNumber *location;
@property (nonatomic, readonly, getter=isConflictOfOtherWorkflow) _Bool conflictOfOtherWorkflow;
@property (nonatomic, readonly) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)className;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)linkingObjectsProperties;
+ (id)ignoredProperties;

- (id)descriptor;
- (id)recordPropertyMap;
- (void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;

@end
