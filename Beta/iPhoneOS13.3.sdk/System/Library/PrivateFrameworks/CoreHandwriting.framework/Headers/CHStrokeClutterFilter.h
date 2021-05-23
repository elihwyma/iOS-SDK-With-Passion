/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CHStrokeClutterFilter : NSObject

{
    struct CHCanvasHeatmap *_heatMap;
    NSDictionary *_CHStrokeID2HeatmapItemID;
    NSDictionary *_heatmapItemID2CHStrokeID;
}

@property (nonatomic, readonly) long long highDensityStrokeCount;

- (id)init;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)initWithCanvasHeatmap:(struct CHCanvasHeatmap *)arg1 stroke2ItemMapping:(id)arg2 item2StrokeMapping:(id)arg3;
- (id)clutterFilterByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 affectedStrokeIdentifiers:(id *)arg3;
- (_Bool)isHighDensityStroke:(id)arg1;

@end
