/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HFMediaPlaybackActionBuilder, NSArray;

@protocol HFActionSetBuilderProtocol <Swift>

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) _Bool requiresDeviceUnlock;
@property (nonatomic, readonly, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;
@property (nonatomic, readonly) HFMediaPlaybackActionBuilder *mediaAction;

- (unsigned short)removeAllActions;
- (unsigned short)addAction: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAction: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAction: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteActionSet;

@end
