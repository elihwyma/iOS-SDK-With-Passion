/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNCommuteDestinationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationOffRouteScore : MNCommuteDestinationScore

{
    int _score;
    _Bool _destinationInvalid;
    NSMutableArray *_offRouteEntries;
}

@property (retain, nonatomic) NSMutableArray *offRouteEntries;

+ (double)weight;

- (int)score;
- (void)updateForLocation:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (void)updateScoreIfPossible;
- (_Bool)destinationInvalid;
- (id)descriptionExtras;
- (void)_updateScoreAndDestinationInvalid;
- (void)updateForRerouteWithLocation:(id)arg1;

@end
