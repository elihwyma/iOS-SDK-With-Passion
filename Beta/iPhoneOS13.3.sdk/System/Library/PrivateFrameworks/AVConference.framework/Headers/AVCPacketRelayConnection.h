/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@interface AVCPacketRelayConnection : NSObject

+ (id)connectionWithSocket:(unsigned short)arg1;
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2;
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3;
+ (id)connectionWithIDSDestination:(id)arg1;
+ (id)connectionWithIDSSocketDescriptor:(unsigned short)arg1;

@end
