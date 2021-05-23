/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/Swift-Protocol.h>

@protocol NRNSXPCListenerDelegate;

@protocol NRNSXPCListenerProtocol <Swift>

@property (retain, nonatomic) id <NRNSXPCListenerDelegate> delegate;

- (unsigned short)invalidate;
- (unsigned short)resume;
- (unsigned short)initWithMachServiceName: /* Error: Ran out of types for this method. */;
- (unsigned short)suspend;

@end
