/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/Swift-Protocol.h>

@class JTImage;

@protocol JTImageViewRendering <Swift>

@property (retain, nonatomic) JTImage *jtImage;
@property (nonatomic, readonly) long long renderingType;
@property (nonatomic) _Bool flipX;
@property (nonatomic) _Bool flipY;
@property (nonatomic) _Bool enableDebugDrawing;

@end
