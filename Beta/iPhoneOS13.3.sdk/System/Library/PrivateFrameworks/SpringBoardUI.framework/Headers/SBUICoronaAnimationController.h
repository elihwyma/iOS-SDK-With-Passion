/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, UIViewPropertyAnimator;

@interface SBUICoronaAnimationController : NSObject

{
    NSHashTable *_participants;
    UIViewPropertyAnimator *_propertyAnimator;
}

@property (retain, nonatomic, getter=_propertyAnimator, setter=_setPropertyAnimator:) UIViewPropertyAnimator *propertyAnimator;

+ (id)animationSettingsForTransitionToStyle:(long long)arg1;

- (void)addParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (id)_configurePropertyAnimatorIfNecessaryForChangeToUserInterfaceStyle:(long long)arg1;
- (void)coronaDidChange:(long long)arg1;

@end
