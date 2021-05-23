/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKSOSUtilities : NSObject

@property (nonatomic, readonly, getter=isMMSEnabled) _Bool MMSEnabled;

+ (_Bool)isMMSEnabled;
+ (id)sharedUtilities;
+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(CDUnknownBlockType)arg4;

- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (_Bool)isMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
- (_Bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
- (void)_sendMessageAndObserveNotification:(id)arg1;
- (id)_sendMessageAndReturnGUIDs:(id)arg1;
- (id)_uniqueFilePathForFilename:(id)arg1;
- (id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(_Bool)arg3;

@end
