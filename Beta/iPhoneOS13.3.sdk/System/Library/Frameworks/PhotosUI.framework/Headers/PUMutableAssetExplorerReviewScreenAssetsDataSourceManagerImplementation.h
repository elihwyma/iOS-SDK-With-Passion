/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUMutableAssetExplorerReviewScreenAssetsDataSourceManagerImplementation : NSObject

{
    NSMutableDictionary *_replacementAssetsByUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *replacementAssetsByUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)replaceAssetInDataSourceWithAsset:(id)arg1;
- (void)removeReplacementAssetInDataSourceForUUID:(id)arg1;
- (id)initWithReplacementAssetsByUUID:(id)arg1;

@end
