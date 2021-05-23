/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface QLThumbnailAdditionCache : NSObject

{
    NSCache *_additionsCache;
}

+ (id)sharedInstance;

- (id)init;
- (void)cacheAddition:(id)arg1 forDocumentID:(id)arg2;
- (id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id *)arg2;
- (void)purgeCachedAdditionForItemAtURL:(id)arg1;

@end
