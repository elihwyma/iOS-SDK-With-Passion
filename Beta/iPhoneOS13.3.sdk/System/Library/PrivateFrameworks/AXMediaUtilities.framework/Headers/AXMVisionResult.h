/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMDiagnostics, AXMLanguage, AXMVisionFeature, CIImage, NSArray, NSNumber, NSSet, NSString;

@protocol NSSecureCoding;

@interface AXMVisionResult : NSObject

{
    CIImage *_image;
    NSArray *_features;
    NSSet *_evaluatedFeatureTypes;
    NSNumber *_appliedImageOrientation;
    AXMDiagnostics *_diagnostics;
    long long _imageRegistrationState;
    NSObject<NSSecureCoding> *_userContext;
    NSString *_detectedFeatureDescription;
    NSString *_detectedTextDescription;
}

@property (nonatomic, readonly) NSArray *faceFeatures;
@property (nonatomic, readonly) NSArray *sceneClassificationFeatures;
@property (nonatomic, readonly) NSArray *objectClassificationFeatures;
@property (nonatomic, readonly) NSArray *modelClassificationFeatures;
@property (nonatomic, readonly) NSArray *captionFeatures;
@property (nonatomic, readonly) NSArray *ocrFeatures;
@property (nonatomic, readonly) NSArray *blurFeatures;
@property (nonatomic, readonly) NSArray *brightnessFeatures;
@property (nonatomic, readonly) NSArray *iconClassFeatures;
@property (retain, nonatomic) NSString *detectedFeatureDescription;
@property (retain, nonatomic) NSString *detectedTextDescription;
@property (retain, nonatomic) CIImage *image;
@property (retain, nonatomic) NSArray *features;
@property (retain, nonatomic) NSSet *evaluatedFeatureTypes;
@property (retain, nonatomic) NSNumber *appliedImageOrientation;
@property (retain, nonatomic) AXMDiagnostics *diagnostics;
@property (nonatomic) long long imageRegistrationState;
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext;
@property (nonatomic, readonly) AXMVisionFeature *colorInfoFeature;
@property (nonatomic, readonly) AXMVisionFeature *assetMetadataFeature;
@property (nonatomic, readonly) NSString *localizedDetectedTextHint;
@property (nonatomic, readonly) NSString *localizedDetectedIconHint;
@property (nonatomic, readonly) AXMLanguage *detectedTextLanguage;

+ (_Bool)supportsSecureCoding;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 diagnostics:(id)arg4 userContext:(id)arg5;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 diagnostics:(id)arg4;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)sortedFeatures;

@end
