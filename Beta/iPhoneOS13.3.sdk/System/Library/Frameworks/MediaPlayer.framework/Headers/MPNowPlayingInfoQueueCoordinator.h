/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVItem, NSArray, NSString;

@protocol MPAVQueueCoordinatingDataSource;

@interface MPNowPlayingInfoQueueCoordinator : NSObject

{
    _Bool _shouldExpectEmptyQueue;
    _Bool _shouldDeferItemLoading;
    MPAVItem *_currentItem;
    NSArray *_items;
    id <MPAVQueueCoordinatingDataSource> _dataSource;
}

@property (weak, nonatomic, readonly) id <MPAVQueueCoordinatingDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (nonatomic) _Bool shouldExpectEmptyQueue;
@property (nonatomic) _Bool shouldDeferItemLoading;
@property (nonatomic, readonly) NSArray *items;

- (void)reset;
- (id)initWithDataSource:(id)arg1;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;

@end
