/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject

{
    PLBackgroundJobWorker *_worker;
    unsigned long long _priority;
}

@property (nonatomic, readonly) PLBackgroundJobWorker *worker;
@property (nonatomic, readonly) unsigned long long priority;

- (id)description;
- (id)initWithWorker:(id)arg1 priority:(unsigned long long)arg2;

@end
