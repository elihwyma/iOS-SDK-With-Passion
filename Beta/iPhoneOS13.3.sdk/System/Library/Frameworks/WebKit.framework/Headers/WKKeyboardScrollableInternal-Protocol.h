/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/Swift-Protocol.h>

@protocol WKKeyboardScrollableInternal <Swift>

- (unsigned short)contentOffset;
- (unsigned short)didFinishScrolling;
- (unsigned short)isKeyboardScrollable;
- (unsigned short)distanceForIncrement:inDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)rubberbandableDirections;
- (unsigned short)boundedContentOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollWithScrollToExtentAnimationTo: /* Error: Ran out of types for this method. */;
- (unsigned short)interactiveScrollVelocity;
- (unsigned short)scrollableDirectionsFromOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollToContentOffset:animated: /* Error: Ran out of types for this method. */;

@end
