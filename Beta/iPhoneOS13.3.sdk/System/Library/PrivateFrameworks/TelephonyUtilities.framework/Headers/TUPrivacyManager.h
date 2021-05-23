/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@interface TUPrivacyManager : NSObject

+ (id)sharedPrivacyManager;

- (id)init;
- (void)dealloc;
- (void)removeRule:(id)arg1;
- (void)_handleBlockListChanged:(id)arg1;
- (void)setBlockIncomingCommunication:(_Bool)arg1 forPhoneNumber:(id)arg2;
- (void)setBlockIncomingCommunication:(_Bool)arg1 forEmailAddress:(id)arg2;
- (void)addRule:(id)arg1;
- (_Bool)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;
- (_Bool)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;
- (id)allBlacklistRules;

@end
