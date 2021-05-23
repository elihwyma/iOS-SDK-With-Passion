/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSManagedObject.h>

@class WFCoreDataWorkflow;

@interface WFCoreDataWorkflowIcon : NSManagedObject

@property (nonatomic) long long backgroundColorValue;
@property (nonatomic) long long glyphNumber;
@property (retain, nonatomic) WFCoreDataWorkflow *workflow;

+ (id)fetchRequest;

@end
