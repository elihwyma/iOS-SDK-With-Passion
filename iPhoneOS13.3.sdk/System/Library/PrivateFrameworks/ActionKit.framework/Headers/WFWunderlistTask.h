//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WFWunderlistTask : MTLModel <MTLJSONSerializing>
{
    BOOL _starred;
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

+ (id)starredJSONTransformer;
+ (id)dueDateJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) long long revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) long long createdById; // @synthesize createdById=_createdById;
@property(readonly, nonatomic) long long assignerId; // @synthesize assignerId=_assignerId;
@property(readonly, nonatomic) long long assigneeId; // @synthesize assigneeId=_assigneeId;
@property(readonly, nonatomic) long long listId; // @synthesize listId=_listId;
@property(readonly, nonatomic) NSDate *dueDate; // @synthesize dueDate=_dueDate;
@property(readonly, nonatomic) BOOL starred; // @synthesize starred=_starred;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long taskId; // @synthesize taskId=_taskId;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *webURL;

@end

