/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, NSMutableDictionary, PHPhotoLibrary;

@interface PHSuggestionMessageContext : NSObject

{
    NSArray *_messages;
    NSDateInterval *_dateInterval;
    unsigned long long _numberOfParticipants;
    NSArray *_cnParticipants;
    NSArray *_phParticipants;
    NSMutableDictionary *_suggestionMatchingResultsBySuggestionIdentifier;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_resolvedParticipants;
    NSArray *_messageTokens;
}

@property (nonatomic, readonly) NSArray *cnParticipants;
@property (nonatomic, readonly) NSArray *phParticipants;
@property (nonatomic, readonly) NSMutableDictionary *suggestionMatchingResultsBySuggestionIdentifier;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSArray *resolvedParticipants;
@property (retain, nonatomic) NSArray *messageTokens;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) unsigned long long numberOfParticipants;

- (id)description;
- (id)detailedDescription;
- (id)initWithMessages:(id)arg1 participantsFromContacts:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithMessages:(id)arg1;
- (id)initWithMessages:(id)arg1 participantsFromPersons:(id)arg2 photoLibrary:(id)arg3;
- (void)setCnParticipants:(id)arg1;
- (void)setPhParticipants:(id)arg1;
- (id)_suggestionsMatchingType:(long long)arg1;
- (void)matchWithSuggestions:(id)arg1;
- (id)matchingResultWithSuggestion:(id)arg1;
- (id)confidentMatchSuggestionUsingStrategy:(unsigned long long)arg1;
- (id)_mostRecentSuggestionFromSuggestions:(id)arg1;

@end
