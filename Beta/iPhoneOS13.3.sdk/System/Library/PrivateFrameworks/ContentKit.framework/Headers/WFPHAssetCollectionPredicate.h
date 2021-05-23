/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSComparisonPredicate.h>

@class PHAssetCollection;

__attribute__((visibility("hidden")))
@interface WFPHAssetCollectionPredicate : NSComparisonPredicate

{
    PHAssetCollection *_assetCollection;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;

- (id)initForAssetsInCollection:(id)arg1;
- (id)wf_photoLibraryFilteringPredicate;

@end
