/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIBookmark.h>

__attribute__((visibility("hidden")))
@interface VUIMutableBookmark : VUIBookmark

+ (_Bool)supportsSecureCoding;

- (void)setPlayCount:(unsigned long long)arg1;
- (void)setHasBeenPlayed:(_Bool)arg1;
- (void)setBookmarkTimestamp:(id)arg1;
- (void)setBookmarkTime:(double)arg1;
- (void)setHasBeenRented:(_Bool)arg1;
- (void)setIsMarkedAsUnwatched:(_Bool)arg1;

@end
