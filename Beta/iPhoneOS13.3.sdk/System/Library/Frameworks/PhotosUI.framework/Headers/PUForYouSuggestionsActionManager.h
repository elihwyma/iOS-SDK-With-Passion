/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionManager.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUForYouSuggestionsActionManager : PUAssetActionManager

{
    NSMutableDictionary *_performersByAsset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (_Bool)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (void)forYouSuggestionActionPerformerDidBegin:(id)arg1;
- (void)forYouSuggestionActionPerformerDidFinish:(id)arg1;

@end
