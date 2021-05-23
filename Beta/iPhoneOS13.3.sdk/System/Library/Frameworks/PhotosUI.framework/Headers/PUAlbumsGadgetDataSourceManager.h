/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray, PUSessionInfo, PXExtendedTraitCollection;

__attribute__((visibility("hidden")))
@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager

{
    PXExtendedTraitCollection *_traitCollection;
    PUSessionInfo *_sessionInfo;
    NSArray *_providers;
}

@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly) NSArray *providers;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;

- (id)gadgetProviders;
- (id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2;

@end
