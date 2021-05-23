/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRGameControllerPropertiesProtobuf *properties;
@property (nonatomic, readonly) unsigned long long controllerID;

- (unsigned long long)type;
- (id)initWithGameControllerProperties:(id)arg1 controllerID:(unsigned long long)arg2;

@end
