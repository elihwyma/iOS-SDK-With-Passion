/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNTask.h>

@class NSArray;

@interface _CNAggregateTask : CNTask

{
    NSArray *_tasks;
}

@property (nonatomic, readonly) NSArray *tasks;

- (id)description;
- (_Bool)cancel;
- (id)run:(id *)arg1;
- (id)initWithName:(id)arg1 tasks:(id)arg2;
- (id)runSubtask:(id)arg1 error:(id *)arg2;
- (void)cancelSubtasks;

@end
