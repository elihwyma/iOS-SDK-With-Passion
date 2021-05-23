/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <MediaPlayer/MPMediaQuery.h>

@interface MPMediaQuery (VideosUI)

+ (id)vui_moviesQueryWithMediaLibrary:(id)arg1;
+ (id)vui_movieRentalsQueryWithMediaLibrary:(id)arg1;
+ (id)vui_episodesQueryWithMediaLibrary:(id)arg1;
+ (id)vui_homeVideosQueryWithMediaLibrary:(id)arg1;
+ (id)_vui_moviesQueryWithMediaLibrary:(id)arg1 rentals:(_Bool)arg2;

- (void)_vui_configureMediaQueryWithMediaLibrary:(id)arg1;

@end
