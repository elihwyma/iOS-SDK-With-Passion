/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNCommuteDestinationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore

{
    int _score;
    NSMutableArray *_geodesicDistances;
    double _slope;
}

@property (retain, nonatomic) NSMutableArray *geodesicDistances;
@property (nonatomic) double slope;

+ (double)weight;

- (int)score;
- (void)updateForLocation:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (void)updateScoreIfPossible;
- (_Bool)destinationInvalid;
- (id)descriptionExtras;
- (void)_updateScoreAndDestinationInvalid;

@end
