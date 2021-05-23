/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener, VTStateManager;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BorealisServer : NSObject

{
    struct BorealisServerImpl *serverImpl;
    NSXPCListener *_serverListener;
    NSMutableArray *_clientConnections;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    void *_mobileAssistantDylib;
    CDUnknownFunctionPointerType _afSiriActivationBuiltInMicVoiceFuncPtr;
    void *_voiceTriggerDylib;
    Class _clsVTStateManager;
    VTStateManager *_vtStateManager;
}

@property (retain, nonatomic) NSXPCListener *serverListener;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) void *mobileAssistantDylib;
@property (nonatomic) CDUnknownFunctionPointerType afSiriActivationBuiltInMicVoiceFuncPtr;
@property (nonatomic) void *voiceTriggerDylib;
@property (retain, nonatomic) Class clsVTStateManager;
@property (retain, nonatomic) VTStateManager *vtStateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)initializeWithReply:(CDUnknownBlockType)arg1;
- (void)enableVoiceTriggerListening:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setListeningProperty:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enableSpeakerStateListening:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)speakerStateActiveReply:(CDUnknownBlockType)arg1;
- (void)speakerStateMutedReply:(CDUnknownBlockType)arg1;
- (void)updateVoiceTriggerConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)voiceTriggerPastDataFramesAvailable:(CDUnknownBlockType)arg1;
- (void)hasBargeInSupportReply:(CDUnknownBlockType)arg1;
- (void)enableBargeInMode:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)listeningEnabledReply:(CDUnknownBlockType)arg1;
- (void)sendVoiceTriggerOccuredNotification:(id)arg1;
- (void)sendSpeakerActiveStateChangedNotification:(_Bool)arg1;
- (void)sendSpeakerMuteStateChangedNotification:(_Bool)arg1;
- (_Bool)heySiriEnabled;
- (void)speechDetectionVADCreated;
- (_Bool)hardwareSupportsVoiceTrigger;

@end
