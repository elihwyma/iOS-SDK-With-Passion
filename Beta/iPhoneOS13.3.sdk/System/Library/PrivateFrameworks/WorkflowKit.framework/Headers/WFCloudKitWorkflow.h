/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSData, NSDate, NSString, WFFileRepresentation, WFWorkflowRecord;

@interface WFCloudKitWorkflow : NSObject

{
    CKRecordID *_identifier;
    NSDate *_createdAt;
    NSDate *_modifiedAt;
    NSString *_name;
    NSString *_workflowSubtitle;
    NSString *_associatedAppBundleIdentifier;
    WFFileRepresentation *_serializedDataFile;
    long long _cachedSyncHash;
    NSData *_serializedQuarantineData;
    NSData *_serializedAccessResourcePerWorkflowStateData;
    NSString *_lastSavedOnDeviceName;
    WFWorkflowRecord *_cachedRecord;
}

@property (retain, nonatomic) WFWorkflowRecord *cachedRecord;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (retain, nonatomic) WFFileRepresentation *serializedDataFile;
@property (nonatomic) long long cachedSyncHash;
@property (copy, nonatomic) NSData *serializedQuarantineData;
@property (copy, nonatomic) NSData *serializedAccessResourcePerWorkflowStateData;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;

+ (id)properties;
+ (id)recordType;

- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (id)recordRepresentationWithError:(id *)arg1;
- (id)initWithRecord:(id)arg1 identifier:(id)arg2;
- (_Bool)isValidForSyncing;

@end
