/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <CameraEditKit/CEKDiscreteSlider.h>

#import <CameraEditKit/Swift-Protocol.h>

@class NSNumberFormatter, NSString;

@protocol CEKApertureSliderDelegate;

@interface CEKApertureSlider : CEKDiscreteSlider <Swift>

{
    id <CEKApertureSliderDelegate> _delegate;
    unsigned long long __minimumApertureIndex;
    unsigned long long __maximumApertureIndex;
    NSNumberFormatter *__decimalFormatter;
    NSNumberFormatter *__wholeNumberFormatter;
}

@property (nonatomic, setter=_setMinimumApertureIndex:) unsigned long long _minimumApertureIndex;
@property (nonatomic, setter=_setMaximumApertureIndex:) unsigned long long _maximumApertureIndex;
@property (nonatomic, readonly) NSNumberFormatter *_decimalFormatter;
@property (nonatomic, readonly) NSNumberFormatter *_wholeNumberFormatter;
@property (weak, nonatomic) id <CEKApertureSliderDelegate> delegate;
@property (nonatomic, readonly) double apertureValue;
@property (nonatomic, readonly) double minimumApertureValue;
@property (nonatomic, readonly) double maximumApertureValue;
@property (nonatomic, readonly) double markedApertureValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)arg1;
+ (id)validApertureValues;
+ (_Bool)isValidApertureIndexFullStop:(unsigned long long)arg1;
+ (_Bool)isValidApertureIndex:(unsigned long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)valueText;
- (double)horizontalValueLabelOffset;
- (void)_updateMainTickMarkOffset;
- (void)_handleDidChangeValue:(id)arg1;
- (unsigned long long)_indexOfClosestValidValueForAperture:(double)arg1;
- (unsigned long long)_discreteIndexForValidApertureIndex:(unsigned long long)arg1;
- (void)setApertureValueClosestTo:(double)arg1;
- (void)setMarkedApertureValueClosestTo:(double)arg1;
- (unsigned long long)_validApertureIndexForDiscreteIndex:(unsigned long long)arg1;
- (void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2;
- (void)setMarkedApertureValueToNone;

@end
