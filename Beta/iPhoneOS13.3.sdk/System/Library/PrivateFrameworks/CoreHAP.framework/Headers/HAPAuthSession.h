/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber, NSObject, NSString, NSUUID;

@protocol HAPAuthSessionDelegate, OS_dispatch_queue;

@interface HAPAuthSession : HMFObject

{
    unsigned char _currentTID;
    id <HAPAuthSessionDelegate> _delegate;
    long long _role;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _currentState;
    NSNumber *_instanceId;
    NSData *_token1;
    NSData *_token2;
    NSUUID *_provisionUUID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned char currentTID;
@property (retain, nonatomic) NSNumber *instanceId;
@property (retain, nonatomic) NSData *token1;
@property (retain, nonatomic) NSData *token2;
@property (retain, nonatomic) NSUUID *provisionUUID;
@property (weak, readonly) id <HAPAuthSessionDelegate> delegate;
@property (nonatomic, readonly) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)_resetSession;
- (void)_handleAuthExchangeData:(id)arg1 withHeader:(_Bool)arg2;
- (void)_sendTokenRequest;
- (void)_handleTokenResponse:(id)arg1 withHeader:(_Bool)arg2;
- (void)_handleTokenUpdateResponse:(id)arg1 withHeader:(_Bool)arg2;
- (void)_reportAuthFailure;
- (void)_sendTokenUpdateRequest:(id)arg1;
- (id)initWithRole:(long long)arg1 instanceId:(id)arg2 delegate:(id)arg3;
- (void)resetSession;
- (void)handleAuthExchangeData:(id)arg1 withHeader:(_Bool)arg2;
- (void)continueAuthAfterValidation:(_Bool)arg1;
- (void)sendTokenUpdateRequest:(id)arg1;
- (_Bool)getToken:(id *)arg1 uuid:(id *)arg2;

@end
