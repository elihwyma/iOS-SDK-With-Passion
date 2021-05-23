/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNCommuteDestinationScore.h>

@class NSArray;

@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore

{
    int _score;
    _Bool _destinationInvalid;
    NSArray *_locationHistory;
    double _scoredDistance;
    double _scoredTimeInterval;
}

@property (copy, nonatomic) NSArray *locationHistory;
@property (nonatomic) double scoredDistance;
@property (nonatomic) double scoredTimeInterval;

+ (double)weight;

- (int)score;
- (void)updateScoreIfPossible;
- (_Bool)destinationInvalid;
- (id)descriptionExtras;
- (void)updateLocationHistory:(id)arg1;
- (int)_scoreForDistance:(double)arg1 timeInterval:(double)arg2;

@end
