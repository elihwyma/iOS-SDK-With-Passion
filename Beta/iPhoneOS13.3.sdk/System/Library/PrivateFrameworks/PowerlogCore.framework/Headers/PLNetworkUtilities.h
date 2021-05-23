/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@interface PLNetworkUtilities : NSObject

+ (id)interfaceNameForIndex:(id)arg1;
+ (id)sockaddrToNSDictionary:(const char *)arg1;
+ (id)stringFromTrafficClass:(unsigned int)arg1;
+ (id)decodeIPPacket:(id)arg1 decodedESPPacket:(_Bool)arg2;
+ (id)decodeEtherType:(unsigned short)arg1;
+ (id)getIPSecWakePacketHeader;
+ (id)tcpParse:(struct __CFData *)arg1 offset:(unsigned char)arg2;
+ (id)udpParse:(struct __CFData *)arg1 offset:(unsigned char)arg2;
+ (_Bool)isESPPacket:(struct __CFData *)arg1 offset:(unsigned char)arg2;
+ (id)handleESPPacket:(_Bool)arg1;

@end
