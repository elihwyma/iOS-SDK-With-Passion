/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (copy, nonatomic) NSDate *importDate;
@property (copy, nonatomic) NSString *sourceAppIdentifier;
@property (retain, nonatomic) WFCoreDataWorkflow *workflow;

+ (id)fetchRequest;

@end
