/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, StockChartDisplayMode, StockGraphImageSet;

@protocol GraphRenderOperationDelegate;

@interface GraphRenderOperation : NSObject

{
    _Bool _cancelled;
    _Bool _roundLineCaps;
    unsigned int _volumeCount;
    struct CGPoint *_points;
    NSArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    CDStruct_b5bb7d6f *_volumeBars;
    double _volumeBarWidth;
    unsigned long long _maxVolume;
    id <GraphRenderOperationDelegate> _delegate;
    StockGraphImageSet *_graphImageSet;
    StockChartDisplayMode *_displayMode;
    struct CGSize _graphSize;
    struct CGSize _volumeGraphSize;
    struct UIEdgeInsets _graphInsets;
}

@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic) struct CGPoint *points;
@property (retain, nonatomic) NSArray *linePointCounts;
@property (retain, nonatomic) NSArray *dottedLinePositions;
@property (retain, nonatomic) NSArray *dottedLinePositionsForStyleOnly;
@property (nonatomic) CDStruct_b5bb7d6f *volumeBars;
@property (nonatomic) double volumeBarWidth;
@property (nonatomic) unsigned long long maxVolume;
@property (nonatomic) unsigned int volumeCount;
@property (weak, nonatomic) id <GraphRenderOperationDelegate> delegate;
@property (nonatomic) struct CGSize graphSize;
@property (nonatomic) struct CGSize volumeGraphSize;
@property (nonatomic) struct UIEdgeInsets graphInsets;
@property (retain, nonatomic) StockGraphImageSet *graphImageSet;
@property (nonatomic) _Bool roundLineCaps;
@property (retain, nonatomic) StockChartDisplayMode *displayMode;

- (void)cancel;
- (void)render;
- (void)renderLineGraph;
- (void)renderVolumeGraph;
- (struct CGSize)lineGraphSize;
- (void)renderGraphLineInContext:(struct CGContext *)arg1 withColor:(id)arg2 offset:(struct CGPoint)arg3;

@end
