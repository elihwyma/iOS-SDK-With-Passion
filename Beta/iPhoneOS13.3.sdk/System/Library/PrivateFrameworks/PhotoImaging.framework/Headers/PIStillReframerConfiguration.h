/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIStillReframerConfiguration : NSObject

{
    double _humanFaceBoundsContainmentThreshold;
    double _humanBodyBoundsContainmentThreshold;
    double _humanBodyExpandedBoundsContainmentThreshold;
    double _humanBodyBoundsContainmentCoefficient;
    double _petBoundsContainmentThreshold;
    double _petExpandedBoundsContainmentThreshold;
    double _petBoundsContainmentCoefficient;
    double _facePaddingFactor;
    double _bodyPaddingAmount;
    double _overscanPercentageAllowed;
    double _unwantedSubjectStartingThreshold;
    long long _imageOrientation;
    double _unwantedSubjectInclusionThreshold;
    double _dominantToPeripheralSubjectRatioThreshold;
    double _minimumCorrectionThreshold;
}

@property (nonatomic) double unwantedSubjectInclusionThreshold;
@property (nonatomic) double dominantToPeripheralSubjectRatioThreshold;
@property (nonatomic) double minimumCorrectionThreshold;
@property (nonatomic) double humanFaceBoundsContainmentThreshold;
@property (nonatomic) double humanBodyBoundsContainmentThreshold;
@property (nonatomic) double humanBodyExpandedBoundsContainmentThreshold;
@property (nonatomic) double humanBodyBoundsContainmentCoefficient;
@property (nonatomic) double petBoundsContainmentThreshold;
@property (nonatomic) double petExpandedBoundsContainmentThreshold;
@property (nonatomic) double petBoundsContainmentCoefficient;
@property (nonatomic) double facePaddingFactor;
@property (nonatomic) double bodyPaddingAmount;
@property (nonatomic) double overscanPercentageAllowed;
@property (nonatomic) double unwantedSubjectStartingThreshold;
@property (nonatomic) long long imageOrientation;

- (id)dictionaryRepresentation;

@end
