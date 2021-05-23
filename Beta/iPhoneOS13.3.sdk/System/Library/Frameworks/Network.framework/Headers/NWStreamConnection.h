/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWConnection.h>

@interface NWStreamConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)arg1;

- (_Bool)readDataWithMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)writeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)writeCloseWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
