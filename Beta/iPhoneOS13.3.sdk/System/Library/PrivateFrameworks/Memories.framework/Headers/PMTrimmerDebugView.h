/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/PMPassthroughView.h>

@class PHAsset, UILabel;

@protocol DebugDataSourceProtocol;

@interface PMTrimmerDebugView : PMPassthroughView

{
    int _duration;
    PHAsset *_asset;
    UILabel *_label;
    id <DebugDataSourceProtocol> _debugDataSource;
}

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) int duration;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id <DebugDataSourceProtocol> debugDataSource;

+ (id)createViewAndAddToParentView:(id)arg1;

- (void)setBounds:(struct CGRect)arg1;
- (void)_resetRangeModelLayers;
- (id)colorWithPatternColors:(id)arg1 baseColor:(id)arg2;
- (void)_addRangeLayerWithColor:(id)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4 height:(double)arg5;
- (void)_addRangeLayerWithColor:(id)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4 markEnds:(_Bool)arg5;
- (void)_addAnalysisIndicators;
- (void)addSuggestionsToRanges:(id)arg1;
- (void)addClipsToRanges:(id)arg1;
- (id)_rangeModelsByType:(id)arg1;
- (id)colorForMetadataRange:(id)arg1;
- (_Bool)isOverlapWithPreviousRangeForIndex:(unsigned long long)arg1 inRangeModels:(id)arg2;
- (id)_attributedStringWithColoredLabelsForKeys:(id)arg1 withRangeModelsByType:(id)arg2;
- (void)_addAutoEditScore:(id)arg1 lastLaneOfTypeOffset:(double *)arg2;
- (id)baseColorForMetadataRangeTypeKey:(id)arg1;
- (id)colorPatternForRatingRange:(id)arg1 baseColor:(id)arg2;
- (id)colorPatternForCameraMotionRange:(id)arg1;
- (id)colorPatternForQualityRange:(id)arg1;
- (id)colorPatternForInterestingnessRange:(id)arg1;
- (id)colorPatternForFineActionRange:(id)arg1;
- (void)reloadRanges;

@end
