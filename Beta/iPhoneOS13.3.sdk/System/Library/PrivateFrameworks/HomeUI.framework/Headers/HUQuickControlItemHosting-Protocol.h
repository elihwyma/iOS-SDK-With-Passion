/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSSet;

@protocol HUQuickControlItemUpdating;

@protocol HUQuickControlItemHosting <Swift>

@property (nonatomic, readonly) id <HUQuickControlItemUpdating> itemUpdater;
@property (copy, nonatomic, readonly) NSSet *controlItems;
@property (nonatomic, getter=areControlsVisible) _Bool controlsVisible;

- (unsigned short)quickControlItemUpdater:didUpdateResultsForControlItems: /* Error: Ran out of types for this method. */;

@end
