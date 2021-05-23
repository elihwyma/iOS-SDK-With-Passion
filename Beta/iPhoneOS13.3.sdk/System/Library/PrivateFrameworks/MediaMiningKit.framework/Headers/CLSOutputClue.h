/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSClue.h>

@class CLSEvent, CLSPerson, CLSPlace, NSMutableArray;

@interface CLSOutputClue : CLSClue

{
    NSMutableArray *_relatedInputTimeClues;
    NSMutableArray *_relatedInputLocationClues;
    NSMutableArray *_relatedInputPeopleClues;
    CLSEvent *_relatedEvent;
    CLSPerson *_relatedPerson;
    CLSPlace *_relatedPlace;
}

@property (retain) CLSPlace *relatedPlace;
@property (retain) CLSPerson *relatedPerson;
@property (retain) CLSEvent *relatedEvent;

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;

- (id)init;
- (id)description;
- (_Bool)isEqualToClue:(id)arg1;
- (void)addRelatedInputClues:(id)arg1;
- (id)relatedInputClues;
- (id)relatedInputLocationClues;
- (id)relatedInputPeopleClues;
- (id)relatedInputTimeClues;

@end
