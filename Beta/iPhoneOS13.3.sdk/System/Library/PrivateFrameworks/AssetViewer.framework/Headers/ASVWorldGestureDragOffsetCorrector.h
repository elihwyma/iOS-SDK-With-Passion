/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ASVWorldGestureDragOffsetCorrector : NSObject

{
    MISSING_TYPE *_initialDragOffset;
    MISSING_TYPE *_thresholdDragOffset;
    double _startTime;
}

@property (nonatomic) MISSING_TYPE *initialDragOffset;
@property (nonatomic) MISSING_TYPE *thresholdDragOffset;
@property (nonatomic) double startTime;

- (id)initWithInitialDragOffset:thresholdDragOffset: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)currentDragOffset;

@end
