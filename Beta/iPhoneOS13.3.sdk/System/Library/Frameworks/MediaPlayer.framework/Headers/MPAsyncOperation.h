/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSOperation.h>

@class ICUserIdentity, NSError, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MPAsyncOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isExecuting;
    _Bool _isFinished;
    ICUserIdentity *_userIdentity;
    NSError *_error;
}

@property (copy, nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) ICUserIdentity *userIdentity;

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)finish;
- (void)execute;
- (void)finishWithError:(id)arg1;

@end
