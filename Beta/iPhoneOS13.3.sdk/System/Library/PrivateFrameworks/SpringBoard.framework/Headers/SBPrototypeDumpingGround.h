/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBBiometricMonitorUI;

@interface SBPrototypeDumpingGround : NSObject <Swift>

{
    SBBiometricMonitorUI *_pearlMonitorUI;
    id _appLaunchedNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updatePearlDebugUI;

@end
