/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray;

@protocol UIViewControllerContextTransitioningEx <Swift>

@property (retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews;
@property (nonatomic, setter=_setPercentOffset:) double _percentOffset;
@property (nonatomic, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) _Bool _allowUserInteraction;

- (unsigned short)__runAlongsideAnimations;
- (unsigned short)_alongsideAnimationsCount;
- (unsigned short)_interactivityDidChange: /* Error: Ran out of types for this method. */;

@end
