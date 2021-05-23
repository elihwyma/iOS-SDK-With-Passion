/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSBinaryImageKernel.h>

@interface MPSImageArithmetic : MPSBinaryImageKernel

{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    float _minimumValue;
    float _maximumValue;
    CDStruct_da2e99ad _primaryStrideInPixels;
    CDStruct_da2e99ad _secondaryStrideInPixels;
    int _arithmeticType;
}

@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) CDStruct_14f26992 primaryStrideInPixels;
@property (nonatomic) CDStruct_14f26992 secondaryStrideInPixels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 arithmeticType:(int)arg2;

@end
