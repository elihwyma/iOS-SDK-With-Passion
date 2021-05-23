/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DKDrawingStroke : NSObject

{
    NSMutableArray *_strokePoints;
}

@property (readonly) NSMutableArray *strokePoints;

+ (id)drawingStrokeWithData:(id)arg1 count:(unsigned long long)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodedBrushStroke;
- (id)_encodePointsDrawingPointData:(id)arg1;
- (id)_decodeDKEncodedDrawingPointDataAsArray:(id)arg1 count:(long long)arg2;

@end
