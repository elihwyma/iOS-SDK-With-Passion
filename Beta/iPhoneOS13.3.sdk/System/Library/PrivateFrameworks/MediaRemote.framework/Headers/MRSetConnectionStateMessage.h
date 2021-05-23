/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetConnectionStateMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int state;

- (unsigned long long)type;
- (unsigned long long)encryptionType;
- (id)initWithConnectionState:(unsigned int)arg1;

@end
