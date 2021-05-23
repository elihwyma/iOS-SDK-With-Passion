/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id <CoreDAVCopyTaskDelegate> delegate;

- (void)dealloc;
- (_Bool)validate:(id *)arg1;
- (id)httpMethod;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;

@end
