/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetRecordingStateMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int state;

- (unsigned long long)type;
- (id)initWithRecordingState:(unsigned int)arg1;

@end
