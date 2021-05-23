/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDBar2DType.h>

__attribute__((visibility("hidden")))
@interface CHDBar3DType : CHDBar2DType

{
    int mGapDepth;
    int mShapeType;
}

+ (_Bool)is3DType;
+ (id)stringWithShapeType:(int)arg1;

- (int)shapeType;
- (void)setShapeType:(int)arg1;
- (id)initWithChart:(id)arg1;
- (void)setGapDepth:(int)arg1;
- (int)gapDepth;

@end
