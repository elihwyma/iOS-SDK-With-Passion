/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, SXMosaicGalleryColumnLayout;

@protocol SXMosaicGalleryLayouterDataSource;

@interface SXMosaicGalleryLayouter : NSObject

{
    _Bool _reverseNextHorizontalLivingRoomLayout;
    unsigned long long _numberOfItems;
    double _width;
    NSArray *_supportedTileTypeClusters;
    id <SXMosaicGalleryLayouterDataSource> _dataSource;
    SXMosaicGalleryColumnLayout *_columnLayout;
    NSMutableArray *_layouts;
    NSMutableArray *_clusters;
    NSMutableArray *_items;
    NSMutableArray *_views;
    NSMutableArray *_frames;
    struct CGSize _contentSize;
}

@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) SXMosaicGalleryColumnLayout *columnLayout;
@property (nonatomic, readonly) NSMutableArray *layouts;
@property (nonatomic, readonly) NSMutableArray *clusters;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) NSMutableArray *views;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic) double width;
@property (nonatomic, readonly) NSArray *supportedTileTypeClusters;
@property (nonatomic, readonly) NSMutableArray *frames;
@property (nonatomic) _Bool reverseNextHorizontalLivingRoomLayout;
@property (weak, nonatomic) id <SXMosaicGalleryLayouterDataSource> dataSource;

- (void)reset;
- (id)initWithDataSource:(id)arg1;
- (void)resetLayout;
- (id)itemAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (void)layoutGalleryOnView:(id)arg1;
- (id)viewForItemAtIndex:(unsigned long long)arg1;
- (void)calculateLayoutForWidth:(double)arg1;
- (id)clusterForItemsInRange:(struct _NSRange)arg1;
- (id)layoutForCluster:(id)arg1 previousLayouts:(id)arg2;
- (id)viewForItem:(id)arg1;
- (id)itemsForRange:(struct _NSRange)arg1;

@end
