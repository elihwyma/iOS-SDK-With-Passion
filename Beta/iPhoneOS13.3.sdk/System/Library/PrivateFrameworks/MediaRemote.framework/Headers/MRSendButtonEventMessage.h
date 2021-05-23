/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRSendButtonEventMessage : MRProtocolMessage

@property (nonatomic, readonly) struct _MRHIDButtonEvent buttonEvent;

- (unsigned long long)type;
- (id)initWithButtonEvent:(struct _MRHIDButtonEvent)arg1;

@end
