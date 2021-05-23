/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HFItem;

@protocol HUResizableCellDelegate;

@protocol HUCellProtocol <Swift>

@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (unsigned short)updateUIWithAnimation: /* Error: Ran out of types for this method. */;

@end
