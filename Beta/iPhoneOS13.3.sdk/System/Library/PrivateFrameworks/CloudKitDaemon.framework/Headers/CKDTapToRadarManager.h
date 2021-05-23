/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDTapToRadarManager : NSObject

{
    NSObject<OS_dispatch_queue> *_alertQueue;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_lastPromptDateByMessageHash;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *alertQueue;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *lastPromptDateByMessageHash;

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void)triggerTapToRadarWithRequest:(id)arg1;
- (id)_hashForMessage:(id)arg1;
- (id)_lastPromptDateForMessage:(id)arg1;
- (void)_notePromptAttemptForMessage:(id)arg1;
- (void)_launchTTRWithRequest:(id)arg1;
- (void)_lockedTriggerTapToRadarWithRequest:(id)arg1;

@end
