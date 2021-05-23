/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCControlChannel.h>

__attribute__((visibility("hidden")))
@interface VCControlChannelFaceTime : VCControlChannel

{
    unsigned int _callID;
    struct tagHANDLE *_SIPHandle;
}

- (void)dealloc;
- (_Bool)sendReliableMessageAndWait:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (void)sendReliableMessage:(id)arg1;

@end
