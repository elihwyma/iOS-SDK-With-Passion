/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPMediaItem, MPMediaItemCollection, MPMediaQuery;

@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor

{
    MPMediaQuery *_query;
    MPMediaItemCollection *_itemCollection;
    MPMediaItem *_startItem;
}

@property (copy, nonatomic, readonly) MPMediaQuery *query;
@property (nonatomic, readonly) MPMediaItemCollection *itemCollection;
@property (retain, nonatomic) MPMediaItem *startItem;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)initWithItemCollection:(id)arg1;
- (void)setStartTime:(double)arg1 forItem:(id)arg2;
- (void)setEndTime:(double)arg1 forItem:(id)arg2;

@end
