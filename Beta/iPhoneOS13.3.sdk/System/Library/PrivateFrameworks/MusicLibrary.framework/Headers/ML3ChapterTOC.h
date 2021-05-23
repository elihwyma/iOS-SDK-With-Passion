/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/MLITChapterTOC.h>

@class ML3Track;

__attribute__((visibility("hidden")))
@interface ML3ChapterTOC : MLITChapterTOC

{
    ML3Track *_track;
}

- (id)initWithChapterDataRef:(struct ChapterData *)arg1 track:(id)arg2;

@end
