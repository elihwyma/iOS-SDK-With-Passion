/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXPeopleNameSelection, PXPeopleSuggestionManager;

@protocol PXCMMPersonSuggestion, PXPeopleSuggestionManagerDataSource, PXPerson;

@interface PXPeopleBootstrapContext : NSObject

{
    _Bool _skipInitialAction;
    _Bool _wantsNaming;
    _Bool _wantsMergeCandidateSuggestions;
    _Bool _wantsPostNaming;
    id <PXPerson> _sourcePerson;
    id <PXPerson> _targetPerson;
    unsigned long long _bootstrapType;
    PXPeopleNameSelection *_nameSelection;
    PXPeopleSuggestionManager *_suggestionManager;
    CDUnknownBlockType _preCommitBlock;
    CDUnknownBlockType _cancelBlock;
    id <PXPeopleSuggestionManagerDataSource> _prefetchedDataSource;
    id <PXCMMPersonSuggestion> _personSuggestion;
}

@property (retain, nonatomic) id <PXCMMPersonSuggestion> personSuggestion;
@property (retain) id <PXPerson> sourcePerson;
@property (retain) id <PXPerson> targetPerson;
@property unsigned long long bootstrapType;
@property (retain) PXPeopleNameSelection *nameSelection;
@property (retain) PXPeopleSuggestionManager *suggestionManager;
@property (nonatomic) _Bool skipInitialAction;
@property (copy, nonatomic) CDUnknownBlockType preCommitBlock;
@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (nonatomic) _Bool wantsNaming;
@property (nonatomic) _Bool wantsMergeCandidateSuggestions;
@property (nonatomic) _Bool wantsPostNaming;
@property (retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> prefetchedDataSource;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)contextWithPerson:(id)arg1 type:(unsigned long long)arg2;
+ (id)contextWithPersonSuggestion:(id)arg1;

- (id)init;

@end
