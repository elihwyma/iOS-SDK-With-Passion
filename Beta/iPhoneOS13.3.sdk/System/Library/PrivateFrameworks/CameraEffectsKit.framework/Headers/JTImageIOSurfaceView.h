/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class JTImage, NSString;

@interface JTImageIOSurfaceView : UIView

{
    _Bool _flipX;
    _Bool _flipY;
    _Bool _enableDebugDrawing;
    JTImage *_jtImage;
    long long _renderingType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) JTImage *jtImage;
@property (nonatomic, readonly) long long renderingType;
@property (nonatomic) _Bool flipX;
@property (nonatomic) _Bool flipY;
@property (nonatomic) _Bool enableDebugDrawing;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setRenderingType:(long long)arg1;
- (void)JTImageIOSurfaceView_commonInit;
- (void)updateDebugDrawing;

@end
