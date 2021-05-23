/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@interface PIWhiteBalanceAdjustmentController : PIAdjustmentController

@property (nonatomic) long long colorType;
@property (nonatomic) double faceStrength;
@property (nonatomic) double faceWarmth;
@property (nonatomic) double faceI;
@property (nonatomic) double faceQ;
@property (nonatomic) double grayStrength;
@property (nonatomic) double grayWarmth;
@property (nonatomic) double grayY;
@property (nonatomic) double grayI;
@property (nonatomic) double grayQ;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (nonatomic) double warmTemp;
@property (nonatomic) double warmTint;
@property (nonatomic) _Bool warmFace;

+ (long long)colorTypeForString:(id)arg1;
+ (id)warmTintKey;
+ (id)warmTempKey;
+ (id)warmFaceKey;
+ (id)tintKey;
+ (id)temperatureKey;
+ (id)grayQKey;
+ (id)grayIKey;
+ (id)grayYKey;
+ (id)grayWarmthKey;
+ (id)grayStrengthKey;
+ (id)faceQKey;
+ (id)faceIKey;
+ (id)faceWarmthKey;
+ (id)faceStrengthKey;
+ (id)colorTypeKey;
+ (id)stringForColorType:(long long)arg1;

- (_Bool)canHaveAuto;

@end
