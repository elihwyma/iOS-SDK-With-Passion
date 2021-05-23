/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBehaviorHandler.h>

@interface SXParallaxComponentBehaviorHandler : SXComponentBehaviorHandler

{
    _Bool _isRotating;
    _Bool _inFirstViewport;
    _Bool _inLastViewport;
    int _direction;
    double _factor;
    struct CGRect _absoluteContentViewFrame;
}

@property (nonatomic, readonly) _Bool isRotating;
@property (nonatomic) _Bool inFirstViewport;
@property (nonatomic) _Bool inLastViewport;
@property (nonatomic) struct CGRect absoluteContentViewFrame;
@property (nonatomic) int direction;
@property (nonatomic, readonly) double factor;

- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;
- (void)destroyWithBehaviorController:(id)arg1;
- (_Bool)requiresContinuousUpdates;

@end
