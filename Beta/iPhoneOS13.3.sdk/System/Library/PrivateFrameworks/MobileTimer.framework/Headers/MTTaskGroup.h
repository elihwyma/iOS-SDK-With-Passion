/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MTTaskGroup : NSObject

{
    NSArray *_tasks;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

+ (id)taskGroupWithTasks:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

- (id)description;

@end
