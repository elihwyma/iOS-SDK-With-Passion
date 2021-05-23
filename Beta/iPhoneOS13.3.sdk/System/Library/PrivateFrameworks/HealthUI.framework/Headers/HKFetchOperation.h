/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@protocol HKFetchOperationDelegate;

@interface HKFetchOperation : NSObject

{
    NSUUID *_UUID;
    long long _clientPriority;
    long long _operationPriority;
    id <HKFetchOperationDelegate> _delegate;
}

@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id <HKFetchOperationDelegate> delegate;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) long long clientPriority;
@property (nonatomic) long long operationPriority;

- (id)init;
- (void)stopOperation;
- (void)startOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_alertDelegateDidUpdatePriority;

@end
