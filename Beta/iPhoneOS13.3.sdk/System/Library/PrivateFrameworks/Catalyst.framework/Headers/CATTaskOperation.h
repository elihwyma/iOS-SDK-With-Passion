/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATOperation.h>

@class CATTaskRequest, NSUUID;

@protocol CATTaskOperationNotificationDelegate;

@interface CATTaskOperation : CATOperation

{
    CATTaskRequest *_request;
    id <CATTaskOperationNotificationDelegate> _notificationDelegate;
    NSUUID *_remoteUUID;
}

@property (copy, nonatomic) NSUUID *remoteUUID;
@property (nonatomic, readonly) CATTaskRequest *request;
@property (weak, nonatomic) id <CATTaskOperationNotificationDelegate> notificationDelegate;

+ (id)new;
+ (_Bool)isCancelable;
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)main;
- (id)initWithRequest:(id)arg1;
- (void)processMessage:(id)arg1;
- (_Bool)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)processNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)cat_addAssertion:(id)arg1;
- (id)cat_assertions;

@end
