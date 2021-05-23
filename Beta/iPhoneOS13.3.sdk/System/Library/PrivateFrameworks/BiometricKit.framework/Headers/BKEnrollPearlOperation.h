/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKEnrollOperation.h>

@class BKIdentity;

@protocol BKEnrollPearlOperationDelegate;

@interface BKEnrollPearlOperation : BKEnrollOperation

{
    _Bool _clientToComplete;
    BKIdentity *_augmentedIdentity;
}

@property (weak, nonatomic) id <BKEnrollPearlOperationDelegate> delegate;
@property (nonatomic) _Bool clientToComplete;
@property (retain, nonatomic) BKIdentity *augmentedIdentity;

- (_Bool)completeWithError:(id *)arg1;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (id)optionsDictionaryWithError:(id *)arg1;
- (_Bool)startWithError:(id *)arg1;
- (_Bool)suspendWithError:(id *)arg1;
- (_Bool)resumeWithError:(id *)arg1;

@end
