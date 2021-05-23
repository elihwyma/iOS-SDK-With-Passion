/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFGalleryWorkflow.h>

@class CKRecordID, NSDate, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFMutableGalleryWorkflow : WFGalleryWorkflow

{
    CKRecordID *identifier;
    NSString *name;
    NSString *shortDescription;
    NSString *longDescription;
    NSNumber *searchable;
    WFWorkflowRecord *workflowRecord;
    NSDate *modifiedAt;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
    WFFileRepresentation *shortcutFile;
    WFFileRepresentation *iconFile;
}

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) NSString *longDescription;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) WFWorkflowRecord *workflowRecord;
@property (retain, nonatomic) NSNumber *searchable;
@property (retain, nonatomic) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) WFFileRepresentation *shortcutFile;
@property (retain, nonatomic) WFFileRepresentation *iconFile;

@end
