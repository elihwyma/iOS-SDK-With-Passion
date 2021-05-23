/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSArray, NSString;

@interface WFWorkflowOrdering : NSObject

{
    CKRecordID *_identifier;
    NSArray *_orderedWorkflowIDs;
}

@property (copy, nonatomic) NSArray *orderedWorkflowIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;

+ (id)properties;
+ (id)recordType;

- (id)initWithZoneID:(id)arg1;

@end
