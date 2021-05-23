/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@class NSString;

@protocol NNMKMailboxItem <Swift>

@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *preview;
@property (nonatomic) unsigned long long status;

- (unsigned short)addState: /* Error: Ran out of types for this method. */;
- (unsigned short)removeState: /* Error: Ran out of types for this method. */;
- (unsigned short)checkState: /* Error: Ran out of types for this method. */;

@end
