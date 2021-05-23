/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString, WFCoreDataWorkflowIcon, WFCoreDataWorkflowLayout, WFCoreDataWorkflowQuarantine, WFWorkflowIcon, WFWorkflowQuarantine;

@interface WFCoreDataWorkflow : NSManagedObject

@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *accessResourcePermissions;
@property (retain, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *actionsDescription;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) _Bool deleted;
@property (nonatomic) _Bool hiddenFromLibraryAndSync;
@property (retain, nonatomic) NSArray *importQuestions;
@property (retain, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSArray *trustedDomains;
@property (copy, nonatomic) NSString *workflowID;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (retain, nonatomic) NSArray *workflowTypes;
@property (retain, nonatomic) WFCoreDataWorkflow *conflictOf;
@property (retain, nonatomic) NSSet *conflicts;
@property (retain, nonatomic) WFCoreDataWorkflowIcon *icon;
@property (retain, nonatomic) WFCoreDataWorkflowLayout *layout;
@property (retain, nonatomic) WFCoreDataWorkflowQuarantine *quarantine;
@property (retain, nonatomic) NSSet *triggers;

+ (id)fetchRequest;

- (id)descriptor;
- (id)recordPropertyMap;
- (void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;

@end
