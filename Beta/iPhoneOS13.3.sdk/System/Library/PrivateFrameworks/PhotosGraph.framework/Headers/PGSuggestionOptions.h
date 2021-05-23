/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDate, NSIndexSet;

@interface PGSuggestionOptions : NSObject

{
    _Bool _allowNotification;
    _Bool _shouldProcessExistingSuggestions;
    _Bool _discardGeneratedSuggestions;
    _Bool _ignoreCollisionsWithExistingSuggestions;
    _Bool _ignoreCollisionsWithSameBatchSuggestions;
    _Bool _generatesInvalidSuggestions;
    _Bool _computesReasons;
    NSDate *_localToday;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSDate *_universalEndDateForWholeLibrarySuggestions;
    unsigned long long _maximumNumberOfSuggestions;
    NSIndexSet *_suggestionTypeWhitelist;
    NSIndexSet *_suggestionSubtypeWhitelist;
    NSIndexSet *_suggestionTypeBlacklist;
    NSIndexSet *_suggestionSubtypeBlacklist;
}

@property (retain, nonatomic) NSDate *localToday;
@property (retain, nonatomic) NSDate *universalStartDate;
@property (retain, nonatomic) NSDate *universalEndDate;
@property (retain, nonatomic) NSDate *universalEndDateForWholeLibrarySuggestions;
@property (nonatomic) unsigned long long maximumNumberOfSuggestions;
@property (nonatomic) _Bool allowNotification;
@property (nonatomic) _Bool shouldProcessExistingSuggestions;
@property (nonatomic) _Bool discardGeneratedSuggestions;
@property (nonatomic) _Bool ignoreCollisionsWithExistingSuggestions;
@property (nonatomic) _Bool ignoreCollisionsWithSameBatchSuggestions;
@property (retain, nonatomic) NSIndexSet *suggestionTypeWhitelist;
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeWhitelist;
@property (retain, nonatomic) NSIndexSet *suggestionTypeBlacklist;
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeBlacklist;
@property (nonatomic) _Bool generateInvalidSuggestions;
@property (nonatomic) _Bool computeReasons;

- (id)init;

@end
