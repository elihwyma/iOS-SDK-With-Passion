/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWConnection.h>

@interface NWMessageConnection : NWConnection

- (void)readMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
