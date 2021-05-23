/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRSetArtworkMessage : MRProtocolMessage

@property (nonatomic, readonly) NSData *artworkData;

- (unsigned long long)type;
- (id)initWithArtworkData:(id)arg1;

@end
