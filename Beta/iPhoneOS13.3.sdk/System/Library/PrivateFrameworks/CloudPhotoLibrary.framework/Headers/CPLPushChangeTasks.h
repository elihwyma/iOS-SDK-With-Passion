/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject

{
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}

@property (nonatomic, readonly) _Bool hasTasks;

+ (_Bool)supportsSecureCoding;
+ (id)descriptionForTaskType:(long long)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateScopedTasksWithBlock:(CDUnknownBlockType)arg1;
- (id)initEmpty;
- (void)_commitTasks;
- (void)enumerateTasksWithBlock:(CDUnknownBlockType)arg1;
- (void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (id)_descriptionFromTasksByType:(id)arg1;
- (id)invalidRecordScopedIdentifiers;
- (id)invalidRecordIdentifiers;

@end
