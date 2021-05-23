/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PHFetchResult;

@interface PXPeopleSuggestionDataSource : NSObject

{
    unsigned long long _initialPageLimit;
    unsigned long long _suggestionFetchType;
    unsigned long long _flowType;
    NSArray *_mergeCandidates;
    PHFetchResult *_mergeCandidateFetchResult;
}

@property (copy, nonatomic) NSArray *mergeCandidates;
@property (copy, nonatomic) PHFetchResult *mergeCandidateFetchResult;
@property (nonatomic) unsigned long long initialPageLimit;
@property (nonatomic) unsigned long long suggestionFetchType;
@property (nonatomic) unsigned long long flowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)arg1;
- (void)startListeningForLibraryChanges;
- (void)stopListeningForLibraryChanges;
- (id)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)cancelSuggestionForPerson:(id)arg1 withToken:(id)arg2 error:(id *)arg3;
- (id)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;
- (id)initWithFlowType:(unsigned long long)arg1;
- (id)fetchAndCacheMergeCandidatesForPerson:(id)arg1;

@end
