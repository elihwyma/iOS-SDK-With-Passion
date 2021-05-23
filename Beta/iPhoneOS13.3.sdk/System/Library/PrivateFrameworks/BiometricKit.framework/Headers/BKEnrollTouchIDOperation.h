/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKEnrollOperation.h>

@class BiometricKitStatistics;

@protocol BKEnrollTouchIDOperationDelegate;

@interface BKEnrollTouchIDOperation : BKEnrollOperation

{
    BiometricKitStatistics *_statistics;
    CDStruct_87aaca7b _compSet;
}

@property (weak, nonatomic) id <BKEnrollTouchIDOperationDelegate> delegate;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (_Bool)startWithError:(id *)arg1;
- (id)createEnrollProgressInfo:(unsigned int)arg1;

@end
