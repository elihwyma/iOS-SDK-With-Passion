/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@interface SBScrunchGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

{
    double _absoluteScale;
    struct CGPoint _initialCentroid;
    struct CGPoint _centroid;
    struct CGPoint _translationWithoutScale;
}

@property (nonatomic) struct CGPoint initialCentroid;
@property (nonatomic) struct CGPoint centroid;
@property (nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint translationWithoutScale;

- (long long)type;

@end
