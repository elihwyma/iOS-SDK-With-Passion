/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBUIBiometricResource;

@interface SBPearlInterlockObserver : NSObject

{
    id <SBUIBiometricResource> _biometricResource;
    _Bool _fired;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)activate;
- (void)deactivate;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)biometricResource:(id)arg1 matchingEnabledDidChange:(_Bool)arg2;
- (void)_fire;
- (id)initWithBiometricResource:(id)arg1;
- (void)_checkForLockout;

@end
