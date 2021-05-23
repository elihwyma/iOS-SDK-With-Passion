/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class ICDocCamImageQuad, NSString, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface ICDocCamViewControllerMeshTransform : NSObject

{
    UIImageView *_animationImageView;
    UIView *_scrimView;
    ICDocCamImageQuad *_imageQuad;
    CDUnknownBlockType _imageMeshAnimationCompletionBlock;
    struct CGSize _imageSize;
    struct CGRect _imageViewFrame;
    struct CGRect _previewViewFrame;
}

@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) UIView *scrimView;
@property (nonatomic) struct CGRect imageViewFrame;
@property (nonatomic) struct CGRect previewViewFrame;
@property (nonatomic) struct CGSize imageSize;
@property (retain, nonatomic) ICDocCamImageQuad *imageQuad;
@property (copy, nonatomic) CDUnknownBlockType imageMeshAnimationCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hide;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)imageMeshTransformWithImageQuad:(id)arg1 imageViewFrame:(struct CGRect)arg2 previewBounds:(struct CGRect)arg3 finalTransform:(_Bool)arg4;
- (struct CGRect)frameForImageInImageViewFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 backgroundImage:(id)arg2 imageViewFrame:(struct CGRect)arg3 view:(id)arg4 imageQuad:(id)arg5 previewView:(id)arg6 previewBounds:(struct CGRect)arg7 scrimView:(id)arg8;

@end
