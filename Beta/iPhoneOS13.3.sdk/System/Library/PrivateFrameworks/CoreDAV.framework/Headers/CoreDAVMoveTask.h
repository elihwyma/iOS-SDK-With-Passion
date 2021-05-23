/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask

{
    NSString *_previousETag;
}

@property (weak, nonatomic) id <CoreDAVMoveTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (void)dealloc;
- (id)description;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;

@end
