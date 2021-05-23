/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSDate, NSDictionary, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFSharedShortcut : NSObject

{
    CKRecordID *_identifier;
    NSString *_name;
    WFWorkflowRecord *_workflowRecord;
    NSDate *_createdAt;
    NSString *_createdBy;
    NSNumber *_iconColor;
    NSNumber *_iconGlyph;
    WFFileRepresentation *_shortcutFile;
    WFFileRepresentation *_iconFile;
}

@property (retain, nonatomic) NSNumber *iconColor;
@property (retain, nonatomic) NSNumber *iconGlyph;
@property (retain, nonatomic) WFFileRepresentation *shortcutFile;
@property (retain, nonatomic) WFFileRepresentation *iconFile;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) WFWorkflowRecord *workflowRecord;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSString *createdBy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, readonly) NSDictionary *propertiesForEventLogging;

+ (id)properties;
+ (id)recordType;

- (id)sharingURL;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (void)ensureFileAssets;

@end
