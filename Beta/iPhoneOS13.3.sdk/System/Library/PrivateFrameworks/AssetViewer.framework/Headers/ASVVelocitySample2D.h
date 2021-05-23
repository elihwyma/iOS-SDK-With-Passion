/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ASVVelocitySample2D : NSObject

{
    MISSING_TYPE *_start;
    MISSING_TYPE *_end;
    double _deltaTime;
}

@property MISSING_TYPE *start;
@property MISSING_TYPE *end;
@property double deltaTime;

- (MISSING_TYPE *)velocity;
- (id)initWithStart:(double)arg1 end:deltaTime: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)calcFinalVelocityFromPreviousSample:(id)arg1;

@end
