/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, SXMosaicGalleryCluster, SXMosaicGalleryColumnLayout;

@interface SXMosaicGalleryGroupLayout : NSObject

{
    double _height;
    NSMutableArray *_columnRanges;
    NSArray *_frames;
    unsigned long long _numberOfColumns;
    SXMosaicGalleryCluster *_cluster;
    SXMosaicGalleryColumnLayout *_columnLayout;
}

@property (nonatomic, readonly) NSArray *frames;
@property (nonatomic, readonly) NSMutableArray *columnRanges;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) SXMosaicGalleryCluster *cluster;
@property (nonatomic, readonly) SXMosaicGalleryColumnLayout *columnLayout;
@property (nonatomic, readonly) unsigned long long numberOfColumns;

- (id)init;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (struct _NSRange)columnRangeForItem:(id)arg1;
- (double)desiredHeightForItem:(id)arg1;
- (double)calculateHeight;
- (id)calculateFrames;
- (id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3;

@end
