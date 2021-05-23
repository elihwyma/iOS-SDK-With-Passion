/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSPointerArray;

@interface _SFDownloadIconCache : NSObject

{
    NSPointerArray *_observers;
    NSMutableDictionary *_thumbnailCache;
    NSMutableDictionary *_utiCache;
    NSMutableSet *_activeRequestIdentifiers;
}

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_startThumbnailRequestForSource:(id)arg1 reportGenericIcons:(_Bool)arg2;
- (id)_genericIconForUTI:(id)arg1;
- (id)_lookupGenericIconForType:(id)arg1;
- (void)_didGenerateThumbnail:(id)arg1 forSource:(id)arg2;
- (void)_generateThumbnailForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)iconForSource:(id)arg1;
- (void)regenerateIconForSource:(id)arg1;

@end
