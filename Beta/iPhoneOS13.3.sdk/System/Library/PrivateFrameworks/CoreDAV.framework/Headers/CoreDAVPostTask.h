/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPostTask : CoreDAVPostOrPutTask

@property (weak, nonatomic) id <CoreDAVTaskDelegate> delegate;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;

@end
