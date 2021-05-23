/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBAppIconForceTouchDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) float animationDurationMultiplier;
@property (nonatomic) _Bool enableUIPreviewInteractionAnimations;
@property (nonatomic) float quickActionAnimationDuration;

- (void)_bindAndRegisterDefaults;

@end
