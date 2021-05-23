/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRSetStateMessageProtobuf;

@interface MRSetStateMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRSetStateMessageProtobuf *state;

- (unsigned long long)type;
- (unsigned long long)priority;
- (id)initWithNowPlayingState:(id)arg1;

@end
