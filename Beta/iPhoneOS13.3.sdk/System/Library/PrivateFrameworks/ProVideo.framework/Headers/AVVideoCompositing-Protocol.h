/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/Swift-Protocol.h>

@class NSDictionary;

@protocol AVVideoCompositing <Swift>

@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) _Bool supportsWideColorSourceFrames;

- (unsigned short)renderContextChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)startVideoCompositionRequest: /* Error: Ran out of types for this method. */;

@end
