/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/Swift-Protocol.h>

@protocol AXAccessQueueTimer <Swift>

@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isPending) _Bool pending;

- (unsigned short)cancel;
- (unsigned short)afterDelay:processBlock: /* Error: Ran out of types for this method. */;

@end
