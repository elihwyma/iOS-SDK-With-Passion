/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKMoviePlaybackRegistry : NSObject

+ (id)sharedMoviePlaybackRegistry;

- (void)objectWillBeginMoviePlayback:(id)arg1;
- (void)objectDidEndMoviePlayback:(id)arg1;
- (void)object:(id)arg1 willTransferMoviePlaybackToObject:(id)arg2;

@end
