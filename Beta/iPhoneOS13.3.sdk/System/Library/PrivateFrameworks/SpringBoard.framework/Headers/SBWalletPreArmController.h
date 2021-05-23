/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary, PKPassLibrary;

@protocol SBUIBiometricResource;

@interface SBWalletPreArmController : NSObject

{
    PKPassLibrary *_passLibrary;
    id <SBUIBiometricResource> _biometricResource;
    long long _triggerSource;
    NSHashTable *_disabledPreArmAssertions;
    NSMutableDictionary *_disabledPreArmAssertionsByType;
}

@property (nonatomic, readonly, getter=isPreArmAvailable) _Bool preArmAvailable;
@property (nonatomic, readonly, getter=isPreArmAllowed) _Bool preArmAllowed;
@property (nonatomic, readonly, getter=isPreArmTriggeredByLockButtonDoublePress) _Bool preArmTriggeredByLockButtonDoublePress;
@property (nonatomic, readonly, getter=isPreArmTriggeredByHomeButtonDoublePress) _Bool preArmTriggeredByHomeButtonDoublePress;
@property (nonatomic, readonly, getter=isPreArmSuppressed) _Bool preArmSuppressed;
@property (nonatomic, readonly, getter=isPreArmExternallySuppressed) _Bool preArmExternallySuppressed;

+ (id)sharedInstance;

- (id)init;
- (void)presentPreArmInterfaceForTriggerSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)acquireSuppressPreArmAssertionOfType:(long long)arg1 forReason:(id)arg2;
- (id)acquireSuppressPreArmAssertionForReason:(id)arg1;
- (id)initWithPassLibrary:(id)arg1 biometricResource:(id)arg2;
- (long long)_computeTriggerSource;
- (long long)_contactlessInterfaceSourceForTriggerSource:(long long)arg1;

@end
