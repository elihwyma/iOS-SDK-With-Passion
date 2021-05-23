/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, WFCoreDataTrigger;

@interface WFCoreDataRunEvent : NSManagedObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int outcome;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFCoreDataTrigger *trigger;

+ (id)fetchRequest;

- (id)descriptor;

@end
