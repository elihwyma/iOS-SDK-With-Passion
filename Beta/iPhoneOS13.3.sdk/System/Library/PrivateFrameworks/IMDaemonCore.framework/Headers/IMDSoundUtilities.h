/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@interface IMDSoundUtilities : NSObject

+ (long long)_soundTypeForMessage:(id)arg1;
+ (void)_playSoundType:(long long)arg1;
+ (long long)_smsSoundsToPlay;
+ (_Bool)_isSMSMessage:(id)arg1;
+ (_Bool)_wasDowngraded:(id)arg1;
+ (_Bool)_isSuppressedForGUID:(id)arg1;
+ (void)_stopSuppressingForGUID:(id)arg1;
+ (_Bool)_isAssociatedMessage:(id)arg1;
+ (_Bool)_isAcknowledgmentMessage:(id)arg1;
+ (_Bool)_isAutoPlay:(id)arg1;
+ (void)_playSMSSound;
+ (void)_playAcknowledgmentSentSound;
+ (void)playMessageSentSoundIfNeeded:(id)arg1;
+ (unsigned int)_installSystemSound:(id)arg1;

@end
