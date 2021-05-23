/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <CoreMaterial/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MTMaterialFiltering <Swift>

@property (nonatomic, readonly) double luminanceAmount;
@property (copy, nonatomic, readonly) NSArray *luminanceValues;
@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly, getter=isAverageColorEnabled) _Bool averageColorEnabled;
@property (nonatomic, readonly) double saturation;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) struct CAColorMatrix colorMatrix;
@property (nonatomic, readonly) double zoom;
@property (nonatomic, readonly) double backdropScale;
@property (copy, nonatomic, readonly) NSString *blurInputQuality;
@property (nonatomic, readonly, getter=isBlurAtEnd) _Bool blurAtEnd;

@end
