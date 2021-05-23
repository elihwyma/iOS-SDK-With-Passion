/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary;

@interface WBSFaviconProviderPrivateCache : NSObject

{
    NSCache *_uuidToImageDataCache;
    NSMutableDictionary *_pageURLStringToIconInfoDict;
    NSMutableDictionary *_iconURLStringToIconInfoDict;
    NSMutableDictionary *_pageURLStringToRejectedResourceIconInfoDict;
}

- (id)init;
- (void)removeAllImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setIsRejectedResource:(_Bool)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3;
- (void)setImageData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize)arg4 hasGeneratedResolutions:(_Bool)arg5;
- (id)rejectedResourceInfoForPageURLString:(id)arg1 iconURLString:(id)arg2;
- (_Bool)linkPageURLString:(id)arg1 toIconURLString:(id)arg2;
- (void)removeImageDataForPageURLString:(id)arg1;
- (id)imageDataForPageURLString:(id)arg1;
- (id)imageDataForIconURLString:(id)arg1;
- (id)imageInfoForPageURLString:(id)arg1;
- (id)imageInfoForIconURLString:(id)arg1;
- (id)firstImageDataMatchingPageURLStringIn:(id)arg1 matchedPageURLString:(id *)arg2;
- (id)pageURLStringsWithPrefixesIn:(id)arg1;

@end
