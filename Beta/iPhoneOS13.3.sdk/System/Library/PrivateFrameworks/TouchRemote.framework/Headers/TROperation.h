/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSObject, TRSession;

@protocol OS_dispatch_semaphore;

@interface TROperation : NSOperation

{
    TRSession *_session;
    NSDictionary *_result;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TRSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)userCancelledError;

- (void)main;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (id)initWithSession:(id)arg1;

@end
