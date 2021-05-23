/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKMatchOperation.h>

@protocol BKMatchTouchIDOperationDelegate;

@interface BKMatchTouchIDOperation : BKMatchOperation

{
    _Bool _requireFingerOff;
}

@property (weak, nonatomic) id <BKMatchTouchIDOperationDelegate> delegate;
@property (nonatomic) _Bool requireFingerOff;

- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (id)optionsDictionaryWithError:(id *)arg1;

@end
