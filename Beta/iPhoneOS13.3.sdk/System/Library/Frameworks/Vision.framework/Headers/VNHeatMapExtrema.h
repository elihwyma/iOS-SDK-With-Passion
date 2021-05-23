/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNHeatMapExtrema : NSObject

{
    struct CGPoint _extrema[4];
    float _extremeValues[4];
}

- (id)init;
- (void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3;
- (struct CGRect)computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(struct vImage_Buffer)arg2;

@end
