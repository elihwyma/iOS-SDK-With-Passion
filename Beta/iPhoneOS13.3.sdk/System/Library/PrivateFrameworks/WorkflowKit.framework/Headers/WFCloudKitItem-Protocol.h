/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class CKRecordID;

@protocol WFCloudKitItem <Swift>

@property (nonatomic, readonly) CKRecordID *identifier;

+ (unsigned short)properties;
+ (unsigned short)recordType;

@end
