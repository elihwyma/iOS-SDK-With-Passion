/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFGalleryPage.h>

@class CKRecordID, NSArray, NSNumber, NSString;

@interface WFMutableGalleryPage : WFGalleryPage

{
    CKRecordID *identifier;
    NSString *name;
    NSNumber *minVersion;
    NSNumber *isRoot;
    NSArray *banners;
    NSArray *collections;
    NSArray *routines;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
    NSArray *donations;
    NSArray *donationsGroupedByApp;
}

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *minVersion;
@property (copy, nonatomic) NSNumber *isRoot;
@property (copy, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSArray *collections;
@property (copy, nonatomic) NSArray *routines;
@property (copy, nonatomic) NSArray *donations;
@property (copy, nonatomic) NSArray *donationsGroupedByApp;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;

@end
