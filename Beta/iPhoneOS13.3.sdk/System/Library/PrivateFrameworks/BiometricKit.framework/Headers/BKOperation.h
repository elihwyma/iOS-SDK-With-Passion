/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class BKDevice, BiometricKitXPCClient, NSString;

@protocol BKOperationDelegate, OS_dispatch_queue;

@interface BKOperation : NSObject

{
    BiometricKitXPCClient *_xpcClient;
    _Bool _startPending;
    _Bool _cancelPending;
    BKDevice *_device;
    id <BKOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property (nonatomic, readonly) BKDevice *device;
@property (weak, nonatomic) id <BKOperationDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (id)dispatchQueue;
- (id)initWithDevice:(id)arg1;
- (_Bool)isDelegate;
- (void)changeState:(long long)arg1;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)touchIDButtonPressed:(_Bool)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)startBioOperation:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startOperation:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)operationEndsWithReason:(long long)arg1;
- (id)optionsDictionaryWithError:(id *)arg1;
- (_Bool)startWithError:(id *)arg1;
- (void)startWithReply:(CDUnknownBlockType)arg1;
- (id)userPresentWithError:(id *)arg1;

@end
