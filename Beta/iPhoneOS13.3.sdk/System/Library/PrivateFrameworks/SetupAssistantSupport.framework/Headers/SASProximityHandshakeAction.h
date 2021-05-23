/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction

{
    SASProximityHandshake *_handshake;
}

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (id)init;
- (_Bool)hasResponse;
- (id)responsePayload;
- (void)setResponseFromData:(id)arg1;

@end
