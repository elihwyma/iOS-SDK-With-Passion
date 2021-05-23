/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUILibraryMetrics : NSObject

+ (void)recordPlayOfMediaEntity:(id)arg1 isLaunchingExtras:(_Bool)arg2;
+ (void)recordPlayOfMediaItem:(id)arg1;
+ (void)recordPageEventWithPageType:(id)arg1;
+ (id)getMediaEntityContentType:(id)arg1;
+ (id)getMediaItemContentType:(id)arg1;
+ (void)recordPageEventWithPageId:(id)arg1 andPageType:(id)arg2;
+ (void)recordClickOnMediaEntity:(id)arg1;
+ (id)pageStringForEntityType:(id)arg1;
+ (id)pageStringForLibraryCellType:(long long)arg1;
+ (id)pageStringForLibraryShelfType:(long long)arg1;
+ (id)pageStringForLibraryCategoryType:(long long)arg1;

@end
