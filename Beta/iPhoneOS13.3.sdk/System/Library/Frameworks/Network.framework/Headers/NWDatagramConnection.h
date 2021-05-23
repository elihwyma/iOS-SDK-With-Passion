/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWConnection.h>

@interface NWDatagramConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)arg1;

- (_Bool)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)writeDatagrams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
