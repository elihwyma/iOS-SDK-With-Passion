/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol GKVoiceChatSessionDelegate;

@interface GKVoiceChatSession : NSObject

{
    id opaqueSession;
}

@property id <GKVoiceChatSessionDelegate> delegate;
@property (readonly) NSString *sessionName;
@property (readonly) NSArray *peerList;
@property (getter=isActiveSession) _Bool activeSession;
@property (readonly) float inputMeter;
@property float sessionVolume;

- (void)dealloc;
- (void)stopSession;
- (void)startSession;
- (id)initWithGKSession:(id)arg1 sessionName:(id)arg2;
- (void)setMute:(_Bool)arg1 forPeer:(id)arg2;
- (_Bool)getMuteStateForPeer:(id)arg1;
- (float)outputMeterForPeer:(id)arg1;

@end
