/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSFaviconProvider.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _SFFaviconProvider : WBSFaviconProvider

{
    NSCache *_monogramTitleToImageCache;
}

- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(_Bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(CDUnknownBlockType)arg7;
- (id)fallbackIconForRequest:(id)arg1;

@end
