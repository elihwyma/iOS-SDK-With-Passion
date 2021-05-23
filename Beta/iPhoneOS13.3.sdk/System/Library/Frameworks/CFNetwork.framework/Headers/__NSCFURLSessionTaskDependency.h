/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLSessionTaskDependency.h>

@class NSURLSessionTask, NSURLSessionTaskDependencyDescription;

@interface __NSCFURLSessionTaskDependency : NSURLSessionTaskDependency

{
    NSURLSessionTaskDependencyDescription *_taskDependencyDescription;
    NSURLSessionTask *_parentTask;
    NSURLSessionTask *_mainDocumentTask;
}

+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(_Bool)arg3;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)taskDependencyDescription;
- (void)setTaskDependencyDescription:(id)arg1;
- (id)parentTask;
- (id)mainDocumentTask;

@end
