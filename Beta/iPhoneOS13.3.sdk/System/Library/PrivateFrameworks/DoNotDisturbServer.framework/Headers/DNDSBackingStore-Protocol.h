/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@protocol DNDSBackingStoreDelegate;

@protocol DNDSBackingStore <Swift>

@property (weak, nonatomic) id <DNDSBackingStoreDelegate> delegate;

- (unsigned short)readRecordWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)writeRecord:error: /* Error: Ran out of types for this method. */;

@end
