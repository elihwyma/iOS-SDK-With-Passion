/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HFItemManager;

@protocol HUItemManagerContainer <Swift>

@property (nonatomic, readonly) HFItemManager *itemManager;

+ (unsigned short)updateMode;

- (unsigned short)recursivelyDisableItemUpdates:withReason: /* Error: Ran out of types for this method. */;

@end
