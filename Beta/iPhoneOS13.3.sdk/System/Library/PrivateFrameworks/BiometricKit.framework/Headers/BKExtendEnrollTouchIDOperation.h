/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKOperation.h>

@class BKIdentity, NSData;

@protocol BKExtendEnrollTouchIDOperationDelegate;

@interface BKExtendEnrollTouchIDOperation : BKOperation

{
    BKIdentity *_identity;
    NSData *_credentialSet;
}

@property (weak, nonatomic) id <BKExtendEnrollTouchIDOperationDelegate> delegate;
@property (retain, nonatomic) BKIdentity *identity;
@property (copy, nonatomic) NSData *credentialSet;

- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)startBioOperation:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;

@end
