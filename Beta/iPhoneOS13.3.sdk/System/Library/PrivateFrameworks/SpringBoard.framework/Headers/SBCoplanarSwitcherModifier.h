/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBCoplanarSwitcherModifier : SBSwitcherModifier

{
    double _scale;
    long long _spacingType;
    SBAppLayout *_activeAppLayout;
}

@property (retain, nonatomic) SBAppLayout *activeAppLayout;
@property (nonatomic) double scale;
@property (nonatomic) long long spacingType;

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)initWithActiveAppLayout:(id)arg1;
- (long long)_indexOfActiveAppLayout;
- (double)_offscreenSpacing;

@end
