/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMeshGenerator : CIFilter

{
    NSNumber *inputWidth;
    CIColor *inputColor;
    NSArray *inputMesh;
}

@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSArray *inputMesh;

+ (id)customAttributes;

- (id)outputImage;
- (struct CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3;
- (id)_CIMesh32;
- (id)_CIMesh16;
- (id)_CIMesh8;
- (id)_CIMesh4;
- (id)_CIMesh2;
- (id)_CIMesh1;

@end
