/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXExploreParsingState : NSObject

{
    _Bool _canIgnoreNextHeroSide;
    _Bool _didMoveBestItemOutOfNextShortRow;
    _Bool _didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
    long long _parseLocation;
    double _buildingBlockAspectRatio;
    long long _nextRowType;
    long long _nextHeroSide;
    long long _numberOfConsecutiveMediumHeroRows;
    long long _effectiveLargeHeroDensity;
    long long _numberOfColumnsOverride;
    long long _lastHeroRowTag;
}

@property (nonatomic) long long parseLocation;
@property (nonatomic) double buildingBlockAspectRatio;
@property (nonatomic) long long nextRowType;
@property (nonatomic) long long nextHeroSide;
@property (nonatomic, readonly) _Bool canIgnoreNextHeroSide;
@property (nonatomic) long long numberOfConsecutiveMediumHeroRows;
@property (nonatomic) long long effectiveLargeHeroDensity;
@property (nonatomic) long long numberOfColumnsOverride;
@property (nonatomic) long long lastHeroRowTag;
@property (nonatomic) _Bool didMoveBestItemOutOfNextShortRow;
@property (nonatomic) _Bool didMoveBestItemOutOfPreviousShortRowIntoHeroRow;

- (void)prepareWithMetrics:(id)arg1;

@end
