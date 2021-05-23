/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int inputMode;

- (unsigned long long)type;
- (id)initWithInputMode:(unsigned int)arg1;

@end
