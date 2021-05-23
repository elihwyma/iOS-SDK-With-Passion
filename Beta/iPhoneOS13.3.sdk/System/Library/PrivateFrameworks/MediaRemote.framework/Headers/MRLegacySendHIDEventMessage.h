/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRLegacySendHIDEventMessage : MRProtocolMessage

{
    struct __IOHIDEvent *_event;
}

@property (nonatomic, readonly) struct _MRHIDButtonEvent buttonEvent;

- (void)dealloc;
- (id)description;
- (unsigned long long)type;
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1;

@end
