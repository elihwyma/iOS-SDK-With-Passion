/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@protocol HULayoutAnchorProviding, HUQuickControlContentHosting;

@protocol HUQuickControlInteractiveContentContaining <Swift>

@property (weak, nonatomic) id <HUQuickControlContentHosting> quickControlHost;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide;

- (unsigned short)beginUserInteractionWithFirstTouchGestureRecognizer: /* Error: Ran out of types for this method. */;

@end
