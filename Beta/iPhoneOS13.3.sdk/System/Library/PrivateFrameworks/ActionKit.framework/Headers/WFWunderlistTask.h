/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface WFWunderlistTask : MTLModel

{
    _Bool _starred;
    long long _taskId;
    NSString *_title;
    NSDate *_dueDate;
    long long _listId;
    long long _assigneeId;
    long long _assignerId;
    long long _createdById;
    NSDate *_createdAt;
    long long _revision;
}

@property (nonatomic, readonly) long long taskId;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) _Bool starred;
@property (nonatomic, readonly) NSDate *dueDate;
@property (nonatomic, readonly) long long listId;
@property (nonatomic, readonly) long long assigneeId;
@property (nonatomic, readonly) long long assignerId;
@property (nonatomic, readonly) long long createdById;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) long long revision;
@property (nonatomic, readonly) NSURL *webURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dueDateJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)starredJSONTransformer;

@end
