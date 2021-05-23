/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@interface SBHomeGestureExclusionTrapezoidSettings : PTSettings

{
    _Bool _showExclusionTrapezoidDebugView;
    _Bool _landscapeTrapezoidEnabled;
    _Bool _allowHorizontalSwipesOutsideLandscapeTrapezoid;
    _Bool _portraitTrapezoidEnabled;
    _Bool _portraitTrapezoidEnabledOnlyForKeyboards;
    _Bool _allowHorizontalSwipesOutsidePortraitTrapezoid;
    double _landscapeTrapezoidHeight;
    double _landscapeTrapezoidBaseHeight;
    double _landscapeTrapezoidAdjacentXDistanceFromEdge;
    double _landscapeTrapezoidOpposingXDistanceFromEdge;
    double _portraitTrapezoidHeight;
    double _portraitTrapezoidBaseHeight;
    double _portraitTrapezoidAdjacentXDistanceFromEdge;
    double _portraitTrapezoidOpposingXDistanceFromEdge;
}

@property (nonatomic) _Bool showExclusionTrapezoidDebugView;
@property (nonatomic) _Bool landscapeTrapezoidEnabled;
@property (nonatomic) _Bool allowHorizontalSwipesOutsideLandscapeTrapezoid;
@property (nonatomic) double landscapeTrapezoidHeight;
@property (nonatomic) double landscapeTrapezoidBaseHeight;
@property (nonatomic) double landscapeTrapezoidAdjacentXDistanceFromEdge;
@property (nonatomic) double landscapeTrapezoidOpposingXDistanceFromEdge;
@property (nonatomic) _Bool portraitTrapezoidEnabled;
@property (nonatomic) _Bool portraitTrapezoidEnabledOnlyForKeyboards;
@property (nonatomic) _Bool allowHorizontalSwipesOutsidePortraitTrapezoid;
@property (nonatomic) double portraitTrapezoidHeight;
@property (nonatomic) double portraitTrapezoidBaseHeight;
@property (nonatomic) double portraitTrapezoidAdjacentXDistanceFromEdge;
@property (nonatomic) double portraitTrapezoidOpposingXDistanceFromEdge;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
