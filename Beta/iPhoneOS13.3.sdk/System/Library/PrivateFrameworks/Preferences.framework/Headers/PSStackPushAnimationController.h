/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UINavigationController;

@interface PSStackPushAnimationController : NSObject

{
    NSArray *_snapshots;
    NSMutableArray *_animationsToRunAlongsideToVC;
    _Bool _hasStartedAnimation;
    NSArray *_viewControllers;
    UINavigationController *_navigationController;
    CDUnknownBlockType _completionBlock;
    long long _animationPreset;
    double _startStagger;
    double _completionStagger;
    double _pushDuration;
    double _springDamping;
}

@property (retain, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) long long animationPreset;
@property (nonatomic) double startStagger;
@property (nonatomic) double completionStagger;
@property (nonatomic) double pushDuration;
@property (nonatomic) double springDamping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2;
+ (id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3;
+ (id)_animationParametersForPreset:(long long)arg1;
+ (void)setDefaultAnimationPreset:(long long)arg1;
+ (void)resetDefaultAnimationParameters;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateAlongsideToViewController:(CDUnknownBlockType)arg1;
- (void)_loadDefaultValues;
- (_Bool)_shouldSkipFirstPush;
- (double)_desiredDuration;
- (double)_actualDuration;
- (void)_addAnimation:(CDUnknownBlockType)arg1 forViewAtIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)_valueForAnimationParameter:(id)arg1;

@end
