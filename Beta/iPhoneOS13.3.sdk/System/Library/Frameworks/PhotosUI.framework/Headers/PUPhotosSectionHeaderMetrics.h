/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUPhotosSectionHeaderMetrics : NSObject

{
    double _cachedHeights[4];
}

+ (id)sharedMetrics;

- (id)init;
- (void)_invalidateCache;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (double)sectionHeaderHeightForStyle:(long long)arg1 hasTitle:(_Bool)arg2 hasDates:(_Bool)arg3 hasLocation:(_Bool)arg4;
- (double)accessibilitySectionHeaderHeightForStyle:(long long)arg1 width:(double)arg2 actionButton:(_Bool)arg3 disclosure:(_Bool)arg4 title:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 locations:(id)arg8;

@end
