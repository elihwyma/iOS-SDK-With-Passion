/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NEPacketTunnelFlow : NSObject

{
    _Bool _handlerSetup;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileHandle *_socket;
    NSMutableDictionary *_uuidMappings;
    CDUnknownBlockType _packetHandler;
    CDUnknownBlockType _packetObjectHandler;
    char **_packetDataArray;
    unsigned int *_packetProtocols;
    unsigned long long *_packetLengths;
    unsigned long long _buffersSize;
    long long _interfaceType;
    struct NEVirtualInterface_s *_interface;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property _Bool handlerSetup;
@property (retain) NSFileHandle *socket;
@property (retain) NSMutableDictionary *uuidMappings;
@property (copy) CDUnknownBlockType packetHandler;
@property (copy) CDUnknownBlockType packetObjectHandler;
@property char **packetDataArray;
@property unsigned int *packetProtocols;
@property unsigned long long *packetLengths;
@property unsigned long long buffersSize;
@property (readonly) long long interfaceType;
@property (readonly) struct NEVirtualInterface_s *interface;

- (void)dealloc;
- (_Bool)setVirtualInterfaceSocket:(id)arg1;
- (void)closeVirtualInterface;
- (void)resetReadHandler;
- (id)initWithVirtualInterfaceType:(long long)arg1;
- (id)signingIdentifierForUUID:(id)arg1;
- (void)readPacketsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readPacketObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)writePackets:(id)arg1 withProtocols:(id)arg2;
- (_Bool)writePacketObjects:(id)arg1;

@end
