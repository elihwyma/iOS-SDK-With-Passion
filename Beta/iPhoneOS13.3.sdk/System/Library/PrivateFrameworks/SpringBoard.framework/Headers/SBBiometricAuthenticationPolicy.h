/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBFLockOutStatusProvider;

@interface SBBiometricAuthenticationPolicy : NSObject

{
    id <SBFLockOutStatusProvider> _lockOutStatusProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRelockAfterBioUnlock;
- (id)initWithLockOutProvider:(id)arg1;

@end
