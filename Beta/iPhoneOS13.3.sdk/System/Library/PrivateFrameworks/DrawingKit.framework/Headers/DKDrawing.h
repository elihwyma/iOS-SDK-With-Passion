/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface DKDrawing : NSObject

{
    NSMutableArray *_strokes;
    struct CGRect _canvasBounds;
    struct CGRect _strokesFrame;
}

@property (nonatomic) struct CGRect canvasBounds;
@property (nonatomic) struct CGRect strokesFrame;
@property (retain, nonatomic) NSArray *strokes;
@property (nonatomic, readonly) long long totalPoints;

+ (_Bool)supportsSecureCoding;
+ (id)copyOfDrawing:(id)arg1 toFitInBounds:(struct CGRect)arg2;
+ (void)resizeDrawing:(id)arg1 toFitInBounds:(struct CGRect)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)mutableStrokes;
- (void)addBrushStroke:(id)arg1;
- (id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1;
- (id)encodeBrushStrokesForArchiving;
- (void)removeLastBrushStroke;

@end
