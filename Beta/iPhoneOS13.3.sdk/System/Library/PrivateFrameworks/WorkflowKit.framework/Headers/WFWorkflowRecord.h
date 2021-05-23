/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFRecord.h>

@class NSArray, NSDate, NSNumber, NSSet, NSString, WFWorkflowIcon, WFWorkflowQuarantine;

@interface WFWorkflowRecord : WFRecord

{
    _Bool _hiddenInComplication;
    _Bool _hiddenFromLibraryAndSync;
    _Bool _isDeleted;
    _Bool _conflictOfOtherWorkflow;
    NSString *_name;
    NSString *_legacyName;
    WFWorkflowIcon *_icon;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_workflowSubtitle;
    NSString *_actionsDescription;
    NSString *_associatedAppBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_source;
    WFWorkflowQuarantine *_quarantine;
    NSArray *_workflowTypes;
    NSArray *_inputClasses;
    NSArray *_actions;
    NSArray *_importQuestions;
    NSString *_minimumClientVersion;
    NSString *_lastMigratedClientVersion;
    long long _lastSyncedHash;
    NSString *_lastSavedOnDeviceName;
    unsigned long long _estimatedSize;
    NSSet *_accessResourcePerWorkflowStates;
    long long _remoteQuarantineStatus;
    NSNumber *_location;
    unsigned long long _cachedSyncHash;
}

@property (copy, nonatomic, readonly) NSString *wfName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *legacyName;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (copy, nonatomic) NSString *actionsDescription;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFWorkflowQuarantine *quarantine;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (nonatomic) _Bool hiddenInComplication;
@property (nonatomic) _Bool hiddenFromLibraryAndSync;
@property (nonatomic, readonly) _Bool isDeleted;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (nonatomic, readonly) unsigned long long estimatedSize;
@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property (nonatomic) long long remoteQuarantineStatus;
@property (nonatomic, readonly) NSNumber *location;
@property (nonatomic, readonly, getter=isConflictOfOtherWorkflow) _Bool conflictOfOtherWorkflow;
@property (nonatomic) unsigned long long cachedSyncHash;

+ (id)defaultPropertyValues;

- (unsigned long long)syncHash;
- (_Bool)saveChangesToStorage:(id)arg1 error:(id *)arg2;
- (id)fileRepresentation;
- (_Bool)isEquivalentForSyncTo:(id)arg1;

@end
