/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNCommuteDestinationScore.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationNavigabilityScore : MNCommuteDestinationScore

{
    _Bool _destinationInvalid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)weight;

- (id)initWithDestination:(id)arg1;
- (void)updateScoreIfPossible;
- (_Bool)destinationInvalid;
- (id)descriptionExtras;
- (void)_checkDestinationRoute:(id)arg1;
- (void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2;

@end
