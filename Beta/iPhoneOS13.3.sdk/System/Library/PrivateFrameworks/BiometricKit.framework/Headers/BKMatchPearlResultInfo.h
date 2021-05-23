/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKMatchResultInfo.h>

@interface BKMatchPearlResultInfo : BKMatchResultInfo

{
    long long _feedback;
}

@property (nonatomic, readonly) long long feedback;

- (id)initWithServerIdentity:(id)arg1 details:(id)arg2;

@end
