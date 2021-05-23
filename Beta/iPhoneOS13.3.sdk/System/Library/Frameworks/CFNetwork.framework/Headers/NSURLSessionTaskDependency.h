/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSURLSessionTask, NSURLSessionTaskDependencyDescription;

@interface NSURLSessionTaskDependency : NSObject

@property (retain, nonatomic) NSURLSessionTaskDependencyDescription *taskDependencyDescription;
@property (retain, nonatomic, readonly) NSURLSessionTask *parentTask;
@property (retain, nonatomic, readonly) NSURLSessionTask *mainDocumentTask;

+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(_Bool)arg3;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;

@end
