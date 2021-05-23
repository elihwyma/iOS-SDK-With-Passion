/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKMatchOperation.h>

@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation

{
    _Bool _longTimeout;
    _Bool _shouldAutoRetry;
}

@property (weak, nonatomic) id <BKMatchPearlOperationDelegate> delegate;
@property (nonatomic) _Bool longTimeout;
@property (nonatomic) _Bool shouldAutoRetry;

- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (id)optionsDictionaryWithError:(id *)arg1;
- (id)matchResultInfoWithServerIdentity:(id)arg1 details:(id)arg2;
- (_Bool)startNewMatchAttemptWithError:(id *)arg1;
- (_Bool)enableAutoRetry:(_Bool)arg1 error:(id *)arg2;
- (_Bool)pauseFaceDetectTimer:(_Bool)arg1 error:(id *)arg2;

@end
