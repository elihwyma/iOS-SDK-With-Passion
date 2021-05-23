/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <PersistentConnection/Swift-Protocol.h>

@protocol PCInterfaceUsabilityMonitorDelegate;

@protocol PCInterfaceUsabilityMonitorProtocol <Swift>

@property (nonatomic, readonly) _Bool isRadioHot;
@property (nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;

- (unsigned short)setTrackedTimeInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)setThresholdOffTransitionCount: /* Error: Ran out of types for this method. */;
- (unsigned short)setTrackUsability: /* Error: Ran out of types for this method. */;

@end
