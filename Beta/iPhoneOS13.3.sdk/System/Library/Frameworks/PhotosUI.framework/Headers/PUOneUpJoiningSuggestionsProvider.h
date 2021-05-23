/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUOneUpJoiningSuggestionsProvider : PUOneUpSuggestionsProvider

{
    NSArray *_suggestionsProviders;
}

@property (copy, nonatomic, readonly) NSArray *suggestionsProviders;

- (id)init;
- (_Bool)canProvideSuggestionForAsset:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSuggestionsProviders:(id)arg1;

@end
