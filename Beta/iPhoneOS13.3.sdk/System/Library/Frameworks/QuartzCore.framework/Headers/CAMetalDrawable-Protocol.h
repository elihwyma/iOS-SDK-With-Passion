/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/Swift-Protocol.h>

@class CAMetalLayer;

@protocol MTLTexture;

@protocol CAMetalDrawable <Swift>

@property (readonly) id <MTLTexture> texture;
@property (readonly) CAMetalLayer *layer;

@end
