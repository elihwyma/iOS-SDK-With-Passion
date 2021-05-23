/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class BKIdentity;

@interface BKMatchResultInfo : NSObject

{
    _Bool _unlocked;
    _Bool _credentialAdded;
    BKIdentity *_identity;
    long long _lockoutState;
}

@property (retain, nonatomic) BKIdentity *identity;
@property (nonatomic) long long lockoutState;
@property (nonatomic) _Bool unlocked;
@property (nonatomic) _Bool credentialAdded;

- (id)initWithServerIdentity:(id)arg1 details:(id)arg2;

@end
