/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SBFMobileKeyBagState : NSObject

{
    NSDictionary *_state;
}

@property (nonatomic, readonly) long long lockState;
@property (nonatomic, readonly) double backOffTime;
@property (nonatomic, readonly) unsigned long long failedAttemptCount;
@property (nonatomic, readonly) _Bool permanentlyBlocked;
@property (nonatomic, readonly) _Bool shouldWipe;
@property (nonatomic, readonly) _Bool recoveryEnabled;
@property (nonatomic, readonly) _Bool recoveryRequired;
@property (nonatomic, readonly) _Bool recoveryPossible;
@property (nonatomic, readonly) long long escrowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isEffectivelyLocked;
- (id)publicDescription;
- (id)initWithMKBLockStateInfo:(id)arg1;

@end
