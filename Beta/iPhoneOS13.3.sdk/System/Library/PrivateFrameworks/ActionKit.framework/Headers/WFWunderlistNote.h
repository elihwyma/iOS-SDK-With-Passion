/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDate, NSDictionary, NSString;

@interface WFWunderlistNote : MTLModel

{
    long long _noteId;
    long long _taskId;
    NSString *_content;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _revision;
}

@property (nonatomic, readonly) long long noteId;
@property (nonatomic, readonly) long long taskId;
@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSDate *updatedAt;
@property (nonatomic, readonly) long long revision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;
+ (id)updatedAtJSONTransformer;

@end
