/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMDSpamController : NSObject

{
    NSMutableDictionary *_chatGUIDToSpamCheckTimerMap;
    NSMutableDictionary *_chatGUIDToCountMap;
    double _spamExtensionCutoffTime;
}

@property (retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap;
@property (retain) NSMutableDictionary *chatGUIDToCountMap;
@property (nonatomic) double spamExtensionCutoffTime;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)_isDisabled;
- (id)chatRegistry;
- (void)_spamCheckTimerFired:(id)arg1;
- (void)detectSpam:(id)arg1 chatGUID:(id)arg2;
- (void)_updateSpamCheckTimerWithInterval:(double)arg1 forChatGUID:(id)arg2;
- (void)__queryServerForID:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldCheckForSpamWithExtensionInChat:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3;
- (void)checkForSpamWithExtensionInChat:(id)arg1 forMessageBody:(id)arg2 sender:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
