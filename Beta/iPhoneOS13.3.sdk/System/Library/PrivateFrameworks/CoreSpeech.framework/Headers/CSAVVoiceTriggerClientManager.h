/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CSAVVoiceTriggerClientManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingBargeInClients;
    NSMutableArray *_pendingDisableBargeInClients;
    NSMutableArray *_bargeInClients;
}

@property (retain, nonatomic) NSMutableArray *pendingBargeInClients;
@property (retain, nonatomic) NSMutableArray *pendingDisableBargeInClients;
@property (retain, nonatomic) NSMutableArray *bargeInClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedVoiceTriggerClient;

- (id)init;
- (void)reset;
- (void)_reset;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)_willEnableBargeInWithClientName:(id)arg1;
- (void)_willDisableBargeInWithClientName:(id)arg1;
- (void)_enableBargeInModeWithClientName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_disableBargeInModeWithClientName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willEnableBargeInMode:(_Bool)arg1 clientName:(id)arg2;
- (void)enableBargeInMode:(_Bool)arg1 clientName:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
