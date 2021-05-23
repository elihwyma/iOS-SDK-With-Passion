/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) NSArray *contentItems;

- (unsigned long long)type;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;

@end
