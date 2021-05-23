/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@protocol CoreDAVOptionsTaskDelegate;

@interface CoreDAVOptionsTask : CoreDAVTask

@property (weak, nonatomic) id <CoreDAVOptionsTaskDelegate> delegate;

- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;

@end
