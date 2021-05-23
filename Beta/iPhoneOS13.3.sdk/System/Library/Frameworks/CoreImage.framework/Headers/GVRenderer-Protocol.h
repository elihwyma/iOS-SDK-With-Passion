/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/Swift-Protocol.h>

@protocol GVRenderer <Swift>

@property (readonly) int direction;
@property (readonly) struct CGSize separation;
@property (readonly) _Bool drawEdgesFirst;

- (unsigned short)setCanvasWidth:height: /* Error: Ran out of types for this method. */;
- (unsigned short)drawNode: /* Error: Ran out of types for this method. */;
- (unsigned short)drawEdge:withPath: /* Error: Ran out of types for this method. */;

@end
