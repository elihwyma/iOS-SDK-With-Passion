/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBBootDefaults;

@interface SBInitialRestartState : NSObject <Swift>

{
    _Bool _isAuthenticated;
    _Bool _isInLostMode;
    _Bool _isBlocked;
    _Bool _hasPasscodeSet;
    _Bool _requiresSetup;
    _Bool _shouldNeverLock;
    _Bool _forSimulator;
    _Bool _isLoginSession;
    SBBootDefaults *_bootDefaults;
}

@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, getter=isInLostMode) _Bool inLostMode;
@property (nonatomic, getter=isBlocked) _Bool blocked;
@property (nonatomic) _Bool hasPasscodeSet;
@property (nonatomic) _Bool requiresSetup;
@property (nonatomic) _Bool shouldNeverLock;
@property (nonatomic, getter=isLoginSession) _Bool loginSession;
@property (retain, nonatomic) SBBootDefaults *bootDefaults;
@property (nonatomic, getter=isForSimulator) _Bool forSimulator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
