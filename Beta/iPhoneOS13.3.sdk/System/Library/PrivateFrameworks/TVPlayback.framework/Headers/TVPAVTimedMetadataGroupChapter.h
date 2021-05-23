/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <TVPlayback/TVPMutableChapter.h>

@class AVMetadataItem;

__attribute__((visibility("hidden")))
@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter

{
    AVMetadataItem *_imageMetadataItem;
}

@property (retain, nonatomic) AVMetadataItem *imageMetadataItem;

- (void)_loadChapterNameFromMetadataItem:(id)arg1;
- (id)initWithAVTimedMetadataGroup:(id)arg1 filterByLanguages:(id)arg2;

@end
