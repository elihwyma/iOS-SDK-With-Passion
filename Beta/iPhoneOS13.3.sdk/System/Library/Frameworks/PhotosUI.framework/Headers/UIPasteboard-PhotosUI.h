/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (PhotosUI)

+ (id)pu_newPasteboardRepresentationForAsset:(id)arg1 data:(id)arg2 utiType:(id)arg3;

- (void)pu_setAssetRepresentations:(id)arg1;
- (void)pu_setAssetRepresentation:(id)arg1;
- (id)pu_assets;
- (_Bool)pu_containsAssets;

@end
