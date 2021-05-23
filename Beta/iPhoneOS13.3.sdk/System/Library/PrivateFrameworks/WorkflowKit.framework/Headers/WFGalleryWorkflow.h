/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSDate, NSDictionary, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFGalleryWorkflow : NSObject

{
    WFWorkflowRecord *_workflowRecord;
    CKRecordID *_identifier;
    NSString *_name;
    NSString *_shortDescription;
    NSString *_longDescription;
    NSNumber *_searchable;
    NSDate *_createdAt;
    NSDate *_modifiedAt;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
    WFFileRepresentation *_shortcutFile;
    WFFileRepresentation *_iconFile;
    NSNumber *_iconColor;
    NSNumber *_iconGlyph;
}

@property (retain, nonatomic) NSNumber *iconColor;
@property (retain, nonatomic) NSNumber *iconGlyph;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) NSString *longDescription;
@property (nonatomic, readonly) WFWorkflowIcon *icon;
@property (nonatomic, readonly) WFWorkflowRecord *workflowRecord;
@property (nonatomic, readonly) NSNumber *searchable;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) CKRecordID *base;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) WFFileRepresentation *shortcutFile;
@property (nonatomic, readonly) WFFileRepresentation *iconFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, readonly) NSDictionary *propertiesForEventLogging;

+ (id)properties;
+ (id)recordType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)sharingURL;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (void)ensureFileAssets;

@end
