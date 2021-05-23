/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <Swift>

{
    NSMutableDictionary *_infos;
}

@property (nonatomic, readonly) NSMutableDictionary *infos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)_recommendedVariationTypeForAsset:(id)arg1;
- (_Bool)canProvideSuggestionForAsset:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)_handleCancellationForAsset:(id)arg1;
- (void)_handleRenderCompletionForAsset:(id)arg1 withSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_handleRenderProgressChangeForInfo:(id)arg1;
- (void)_handleRenderStatusChangeForAsset:(id)arg1 info:(id)arg2;

@end
