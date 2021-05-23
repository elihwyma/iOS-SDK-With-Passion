/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSManagedObject.h>

@class NSOrderedSet;

@interface WFCoreDataWorkflowLayout : NSManagedObject

@property (retain, nonatomic) NSOrderedSet *shortcuts;

+ (id)fetchRequest;

@end
