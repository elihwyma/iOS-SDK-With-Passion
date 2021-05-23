/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSString;

@interface IMMessageNotificationTimeManager : NSObject

{
    NSMutableDictionary *_chatsStartTimeDictionary;
    NSString *_latestIDSTokenURI;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property (retain, nonatomic) NSMutableDictionary *chatsStartTimeDictionary;
@property (retain, nonatomic) NSString *latestIDSTokenURI;
@property (retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (long long)_getTimeWindowOverride;
- (_Bool)_isToneToggleSwitchOn;
- (long long)_getToneTimeWindow;
- (void)tearDownSessionForChatIdentifier:(id)arg1;
- (_Bool)_shouldSendNotificationForChatIdentifier:(id)arg1;
- (void)setDate:(id)arg1 forChatIdentifier:(id)arg2;
- (void)setLatestNotificationIDSTokenURI:(id)arg1;
- (void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)arg1;
- (void)acquireAssertionToUnsuspendProcess;

@end
