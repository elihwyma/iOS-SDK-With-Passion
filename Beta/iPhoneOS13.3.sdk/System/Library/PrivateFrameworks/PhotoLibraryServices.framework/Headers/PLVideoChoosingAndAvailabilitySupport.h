/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PLVideoChoosingAssetInformation, PLVideoChoosingOptions, PLVideoResourceContext;

@interface PLVideoChoosingAndAvailabilitySupport : NSObject

{
    id <PLVideoResourceContext> _context;
    id <PLVideoChoosingAssetInformation> _assetInformation;
    id <PLVideoChoosingOptions> _options;
    struct CGSize _size;
}

@property (nonatomic, readonly) id <PLVideoResourceContext> context;
@property (nonatomic, readonly) id <PLVideoChoosingAssetInformation> assetInformation;
@property (nonatomic, readonly) id <PLVideoChoosingOptions> options;
@property (nonatomic, readonly) struct CGSize size;

- (id)initWithContext:(id)arg1 assetInformation:(id)arg2 options:(id)arg3 size:(struct CGSize)arg4;
- (id)_acceptableResourceVersions;
- (unsigned int)_videoQualityLevelForRequest;
- (id)_chooseResourceDownloadRequired:(_Bool *)arg1 renderRequired:(_Bool *)arg2;
- (id)chooseResourceDownloadRequired:(_Bool *)arg1 renderRequired:(_Bool *)arg2;

@end
