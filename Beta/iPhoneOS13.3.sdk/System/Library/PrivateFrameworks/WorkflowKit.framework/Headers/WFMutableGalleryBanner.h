/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFGalleryBanner.h>

@class CKRecordID, NSString;

@interface WFMutableGalleryBanner : WFGalleryBanner

{
    CKRecordID *identifier;
    NSString *name;
    CKRecordID *detailPage;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
}

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) CKRecordID *detailPage;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;

@end
