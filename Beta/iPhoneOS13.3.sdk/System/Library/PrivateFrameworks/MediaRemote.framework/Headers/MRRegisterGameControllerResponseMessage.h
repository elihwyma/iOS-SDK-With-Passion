/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterGameControllerResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long controllerID;

- (unsigned long long)type;
- (id)initWithControllerID:(unsigned long long)arg1;

@end
