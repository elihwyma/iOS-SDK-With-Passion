/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage

{
    unsigned long long _priority;
}

@property (nonatomic, readonly) _MRGameControllerMessageProtobuf *event;
@property (nonatomic, readonly) unsigned long long controllerID;

- (unsigned long long)type;
- (unsigned long long)priority;
- (_Bool)shouldLog;
- (id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;

@end
