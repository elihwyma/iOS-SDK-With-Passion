/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKUIQuadView, NSMutableSet, NSString, NUScene, NUView;

@protocol NTKAstronomyVistaViewObserver;

@interface NTKAstronomyVistaView : UIView

{
    NUView *_viewer;
    NSMutableSet *_activeContentsAnimations;
    unsigned long long _vista;
    unsigned int _isSupplemental:1;
    unsigned int _isDisplayOn:1;
    unsigned int _isAnimating:1;
    CLKDevice *_device;
    id <NTKAstronomyVistaViewObserver> _observer;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (weak, nonatomic) id <NTKAstronomyVistaViewObserver> observer;
@property (retain, nonatomic) NUScene *scene;
@property (nonatomic, readonly) CLKUIQuadView *quadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setOpaque:(_Bool)arg1;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;
- (id)snapshotImage;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)_updateAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)setMinFrameInterval:(int)arg1;
- (void)updateSunLocationAnimated:(_Bool)arg1;
- (void)_setVista:(unsigned long long)arg1 scene:(id)arg2;
- (void)universeAnimationFinished:(id)arg1;
- (void)viewWillDisplay:(id)arg1 forTime:(double)arg2;
- (id)rotatable:(unsigned long long)arg1;
- (unsigned long long)vista;
- (void)showSupplemental:(_Bool)arg1 animated:(_Bool)arg2;
- (id)generateAnimationArrayFromVista:(unsigned long long)arg1 toVista:(unsigned long long)arg2;
- (void)setVista:(unsigned long long)arg1;
- (void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2;

@end
