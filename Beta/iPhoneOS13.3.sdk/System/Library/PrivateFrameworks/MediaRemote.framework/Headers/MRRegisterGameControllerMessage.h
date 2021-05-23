/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRRegisterGameControllerMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRGameControllerPropertiesProtobuf *properties;

- (unsigned long long)type;
- (id)initWithProperties:(id)arg1;

@end
