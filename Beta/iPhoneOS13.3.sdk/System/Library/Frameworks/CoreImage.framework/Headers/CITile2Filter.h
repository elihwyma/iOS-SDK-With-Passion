/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CITileFilter.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CITile2Filter : CITileFilter

{
    NSNumber *inputAcuteAngle;
}

@property (retain, nonatomic) NSNumber *inputAcuteAngle;

+ (id)customAttributes;

- (id)outputImage;
- (double)_roiArea;
- (struct vec2)_roiCenter;
- (id)_singlePixelImage;
- (struct CGRect)_roiRect;

@end
