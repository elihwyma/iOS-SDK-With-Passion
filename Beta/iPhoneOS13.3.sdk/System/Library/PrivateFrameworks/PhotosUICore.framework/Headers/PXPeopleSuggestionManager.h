/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, PXPeoplePagingSuggestionProvider, PXSuggestionToken;

@protocol PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate, PXPerson;

@interface PXPeopleSuggestionManager : NSObject

{
    _Bool _mute;
    _Bool _didReachEnd;
    unsigned int _confirmYesSoundID;
    unsigned int _confirmNoSoundID;
    id <PXPeopleSuggestionManagerDelegate> _delegate;
    id <PXPeopleSuggestionManagerDataSource> _dataSource;
    id <PXPerson> _person;
    unsigned long long _userConfirmationsCount;
    unsigned long long _autoConfirmationsCount;
    NSMutableSet *_skippedSuggestions;
    PXSuggestionToken *_suggestionToken;
    PXPeoplePagingSuggestionProvider *_suggestionProvider;
    NSMutableSet *_confirmedSuggestions;
    NSMutableSet *_rejectedSuggestions;
}

@property (nonatomic) _Bool didReachEnd;
@property (retain, nonatomic) id <PXPerson> person;
@property (retain, nonatomic) NSMutableSet *skippedSuggestions;
@property (retain, nonatomic) PXSuggestionToken *suggestionToken;
@property (nonatomic) unsigned long long userConfirmationsCount;
@property (nonatomic) unsigned long long autoConfirmationsCount;
@property (nonatomic) unsigned int confirmYesSoundID;
@property (nonatomic) unsigned int confirmNoSoundID;
@property (retain, nonatomic) PXPeoplePagingSuggestionProvider *suggestionProvider;
@property (retain, nonatomic) NSMutableSet *confirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *rejectedSuggestions;
@property (weak, nonatomic) id <PXPeopleSuggestionManagerDelegate> delegate;
@property (retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> dataSource;
@property (nonatomic) _Bool mute;
@property (nonatomic, readonly) NSArray *currentSuggestions;
@property (nonatomic, readonly) _Bool canUndo;
@property (nonatomic, readonly) _Bool isLoading;

- (id)init;
- (void)dealloc;
- (void)undo;
- (id)initWithPerson:(id)arg1;
- (void)preloadSounds;
- (void)requestNextSuggestion;
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)arg1;
- (_Bool)isSuggestionConfirmed:(id)arg1;
- (void)markSuggestions:(id)arg1 confirmed:(_Bool)arg2;
- (void)markSuggestionsAsSkipped:(id)arg1;
- (void)commitUserResponses;
- (id)commitUserResponsesToPerson:(id)arg1;
- (void)cancelPendingSuggestionLoading;
- (unsigned int)_soundIdWithFilename:(id)arg1;
- (void)_playConfirmYesSound;
- (void)_playConfirmNoSound;
- (void)_loadMoreSuggestionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifyDelegateWeHaveMoreSuggestions:(_Bool)arg1;
- (id)_nonSkippedSuggestionsForSuggestions:(id)arg1;
- (_Bool)_fetchingSuggestions;

@end
