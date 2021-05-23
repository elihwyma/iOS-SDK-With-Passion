/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/Swift-Protocol.h>

@protocol NSTextGraphicsContext <Swift>

@property (readonly) struct CGContext *CGContext;
@property (readonly, getter=isFlipped) _Bool flipped;
@property (readonly, getter=isDrawingToScreen) _Bool drawingToScreen;

+ (unsigned short)graphicsContextForApplicationFrameworkContext: /* Error: Ran out of types for this method. */;

@end
