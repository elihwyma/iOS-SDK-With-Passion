/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@interface PUTilingViewSettings : PXSettings

{
    _Bool _useSpringAnimations;
    _Bool _useSystemSpringAnimations;
    _Bool _useOvershootingSpringAnimations;
    _Bool _allowPaging;
    _Bool _allowPreheating;
    _Bool _allowTileReuse;
    _Bool _allowsEdgeAntialiasing;
    _Bool _carryOverVelocities;
    _Bool _tintTiles;
    _Bool _showVisibleRects;
    _Bool _rotateDisappearingTiles;
    _Bool _showSnapshottableTiles;
    double _animationDragCoefficient;
    double _springAnimationDuration;
    double _defaultAnimationDuration;
    double _transitionDuration;
    long long _transitionProgressBehavior;
    double _interactiveTransitionBackgroundDimming;
    double _transitionChromeDelay;
}

@property (nonatomic) double animationDragCoefficient;
@property (nonatomic) _Bool useSpringAnimations;
@property (nonatomic) _Bool useSystemSpringAnimations;
@property (nonatomic) double springAnimationDuration;
@property (nonatomic) double defaultAnimationDuration;
@property (nonatomic) _Bool useOvershootingSpringAnimations;
@property (nonatomic) double transitionDuration;
@property (nonatomic) long long transitionProgressBehavior;
@property (nonatomic) double interactiveTransitionBackgroundDimming;
@property (nonatomic) double transitionChromeDelay;
@property (nonatomic) _Bool allowPaging;
@property (nonatomic) _Bool allowPreheating;
@property (nonatomic) _Bool allowTileReuse;
@property (nonatomic) _Bool allowsEdgeAntialiasing;
@property (nonatomic) _Bool carryOverVelocities;
@property (nonatomic) _Bool tintTiles;
@property (nonatomic) _Bool showVisibleRects;
@property (nonatomic) _Bool rotateDisappearingTiles;
@property (nonatomic) _Bool showSnapshottableTiles;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
