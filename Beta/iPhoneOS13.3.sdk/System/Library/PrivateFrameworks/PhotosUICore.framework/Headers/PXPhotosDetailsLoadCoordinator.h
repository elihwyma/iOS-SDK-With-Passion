/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface PXPhotosDetailsLoadCoordinator : NSObject

{
    NSHashTable *__tokens;
    NSMutableArray *__relatedBlocks;
    NSMutableArray *__suggestionsBlocks;
    double _timeoutDelay;
}

@property (nonatomic, readonly) NSHashTable *_tokens;
@property (nonatomic, readonly) NSMutableArray *_relatedBlocks;
@property (nonatomic, readonly) NSMutableArray *_suggestionsBlocks;
@property (nonatomic) double timeoutDelay;

+ (id)loadCoordinatorForContext:(id)arg1;

- (id)init;
- (id)_createToken;
- (id)tokenForCuratedFetch;
- (id)tokenForLivePhotoVariations;
- (void)performBlockWhenReadyToFetchRelated:(CDUnknownBlockType)arg1;
- (void)performBlockWhenReadyToFetchSuggestions:(CDUnknownBlockType)arg1;
- (void)_tokenDidComplete:(id)arg1;
- (_Bool)_canPerformRelatedFetch;
- (_Bool)_canPerformSuggestionsFetch;

@end
