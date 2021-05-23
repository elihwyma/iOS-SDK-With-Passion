/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTaskOperation.h>

@class CATTaskClient, NSError, NSNumber;

@interface CATRemoteTaskOperation : CATTaskOperation

{
    NSError *mClientError;
    CATTaskClient *_client;
    NSNumber *_remotePhase;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (nonatomic, readonly) CATTaskClient *client;

+ (_Bool)isCancelable;
+ (id)invalidRemoteTaskWithRequest:(id)arg1 error:(id)arg2;

- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (void)processMessage:(id)arg1;
- (void)operationWillFinish;
- (id)initWithRequest:(id)arg1 clientError:(id)arg2;
- (void)cancelOperationIfNeeded;
- (void)updateProgressWithRemoteProgress:(id)arg1;
- (void)updateCompletedUnitCount:(long long)arg1 andTotalUnitCount:(long long)arg2;
- (void)processNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithRequest:(id)arg1 client:(id)arg2;
- (void)fetchProgress;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)clientFailedWithError:(id)arg1;

@end
