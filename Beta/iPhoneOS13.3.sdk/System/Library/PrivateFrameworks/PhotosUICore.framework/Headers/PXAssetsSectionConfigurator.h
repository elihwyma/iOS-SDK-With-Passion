/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXAssetsSectionLayoutSpec;

@interface PXAssetsSectionConfigurator : NSObject

{
    PXAssetsSectionLayoutSpec *_assetsSectionLayoutSpec;
    struct UIEdgeInsets _containerInsets;
}

@property (nonatomic, readonly) PXAssetsSectionLayoutSpec *assetsSectionLayoutSpec;
@property (nonatomic, readonly) struct UIEdgeInsets containerInsets;

- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (void)configureAssetSectionLayout:(id)arg1;
- (id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3;
- (struct CGRect)containerFrameForAssetSectionLayout:(id)arg1;

@end
