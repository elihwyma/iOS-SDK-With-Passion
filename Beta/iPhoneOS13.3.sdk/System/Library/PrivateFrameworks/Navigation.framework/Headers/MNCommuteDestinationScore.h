/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNCommuteDestination, MNCommuteDestinationSuggestion, NSDate, NSHashTable, NSString;

@interface MNCommuteDestinationScore : NSObject

{
    _Bool _destinationInvalid;
    int _score;
    NSDate *_lastUpdate;
    MNCommuteDestination *_destination;
    NSString *_descriptionExtras;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (weak, nonatomic) MNCommuteDestination *destination;
@property (nonatomic, readonly) _Bool destinationInvalid;
@property (nonatomic, readonly) int score;
@property (readonly) double weightedScore;
@property (readonly) MNCommuteDestinationSuggestion *destinationSuggestion;
@property (nonatomic, readonly) NSString *descriptionExtras;

+ (double)weight;
+ (id)sessionStartDate;
+ (void)setSessionStartDate:(id)arg1;
+ (id)sessionStartDateOrNow;

- (id)init;
- (id)description;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (void)notifyObservers;
- (void)lastUpdateIsNow;
- (void)updateScoreIfPossible;

@end
