/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNCommuteDestinationScore.h>

@interface MNCommuteDestinationStartEndTimeScore : MNCommuteDestinationScore

+ (double)weight;

- (int)score;
- (void)updateScoreIfPossible;
- (_Bool)destinationInvalid;
- (id)descriptionExtras;

@end
