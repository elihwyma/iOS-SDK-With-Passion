/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@protocol HUControlPanelRule;

@protocol HUControlPanelConfiguration <Swift>

@property (nonatomic, readonly) id <HUControlPanelRule> rule;
@property (nonatomic, readonly) Class cellClass;

- (unsigned short)setupControlsForCell:item: /* Error: Ran out of types for this method. */;

@end
