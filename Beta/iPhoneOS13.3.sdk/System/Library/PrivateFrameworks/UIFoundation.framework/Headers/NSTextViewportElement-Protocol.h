/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/Swift-Protocol.h>

@class NSTextRange;

@protocol NSTextViewportElement <Swift>

@property (readonly) NSTextRange *representedRange;
@property (readonly) struct CGSize layoutSize;
@property struct CGPoint layoutPoint;

- (unsigned short)drawAtPoint:context: /* Error: Ran out of types for this method. */;
- (unsigned short)representedRangeAtPoint: /* Error: Ran out of types for this method. */;

@end
