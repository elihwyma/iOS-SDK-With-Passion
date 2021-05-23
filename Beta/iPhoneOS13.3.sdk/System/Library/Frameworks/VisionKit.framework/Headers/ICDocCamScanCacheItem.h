/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class ICDocCamImageCache, NSArray;

@interface ICDocCamScanCacheItem : NSObject

{
    ICDocCamImageCache *_imageCache;
    NSArray *_docInfos;
}

@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (retain, nonatomic) NSArray *docInfos;

- (id)init;
- (id)docInfoForScanDataDelegate:(id)arg1;
- (id)initWithImageCache:(id)arg1 docInfos:(id)arg2;
- (id)imageForScanDataDelegateIdentifier:(id)arg1;
- (void)deleteCacheImages;
- (void)doneBuildingCache;

@end
