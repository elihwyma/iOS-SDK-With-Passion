/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@interface GKRecoveryAttempter : NSObject

{
    CDUnknownBlockType _attemptRecovery;
}

+ (id)recoveryAttempterUsingHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;

@end
