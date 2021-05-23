/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <VisionKit/Swift-Protocol.h>

@protocol ICDocCamImageQuad <Swift>

@property (readonly) struct CGPoint topLeft;
@property (readonly) struct CGPoint topRight;
@property (readonly) struct CGPoint bottomLeft;
@property (readonly) struct CGPoint bottomRight;
@property (readonly) struct CGRect boundingBox;

@end
