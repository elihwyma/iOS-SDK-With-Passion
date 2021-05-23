/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGEffect.h>

@interface PXGPinchEffect : PXGEffect

@property (nonatomic) struct CGPoint normalizedCenter;
@property (nonatomic) double scale;
@property (nonatomic) struct CGRect sampleRect;

- (int)type;
- (int)shaderFlags;
- (id)initWithMetadataStore:(id)arg1;

@end
