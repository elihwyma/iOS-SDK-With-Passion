/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFGalleryCollection.h>

@class CKRecordID, NSArray, NSDate, NSString;

@interface WFMutableGalleryCollection : WFGalleryCollection

{
    CKRecordID *identifier;
    NSString *name;
    NSString *collectionDescription;
    NSArray *workflows;
    NSDate *modifiedAt;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
}

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *collectionDescription;
@property (copy, nonatomic) NSArray *workflows;
@property (retain, nonatomic) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;

@end
