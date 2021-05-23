/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/Swift-Protocol.h>

@protocol CIGVRenderer <Swift>

@property int direction;
@property struct CGSize separation;
@property _Bool drawEdgesFirst;

- (unsigned short)setFileURL: /* Error: Ran out of types for this method. */;
- (unsigned short)setCanvasWidth:height: /* Error: Ran out of types for this method. */;
- (unsigned short)drawNode: /* Error: Ran out of types for this method. */;
- (unsigned short)drawEdge:withPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setFileTitle: /* Error: Ran out of types for this method. */;
- (unsigned short)flushRender;

@end
