/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRLyricsEventProtobuf;

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRLyricsEventProtobuf *event;

- (unsigned long long)type;
- (id)initWithEvent:(id)arg1;

@end
