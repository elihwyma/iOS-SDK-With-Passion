/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface VoiceChatSessionBeaconState : NSObject

{
    struct tagVoiceChatBeacon *lastReceivedBeacon;
    unsigned int sentState;
    unsigned int receivedState;
    _Bool needsSend;
    unsigned int typeToSend;
}

@property (nonatomic) unsigned int sentState;
@property (nonatomic) unsigned int receivedState;
@property (nonatomic) _Bool needsSend;
@property (nonatomic) unsigned int typeToSend;

- (id)init;
- (void)dealloc;
- (struct tagVoiceChatBeacon *)lastReceivedBeacon;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon *)arg1;

@end
