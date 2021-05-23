/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMLanguage, AXMTaggedText, AXMVisionFeatureAestheticsResult, AXMVisionFeatureAssetMetadata, AXMVisionFeatureColorInfo, AXMVisionFeatureFaceDetectionResult, CMDeviceMotion, NSArray, NSDictionary, NSNumber, NSString;

@protocol NSSecureCoding;

@interface AXMVisionFeature : NSObject

{
    unsigned long long _featureType;
    NSArray *_subfeatures;
    NSString *_barcodeType;
    long long _ocrFeatureType;
    AXMLanguage *_textDetectionLanguage;
    double _creationDate;
    struct CGRect _frame;
    struct CGRect _normalizedFrame;
    NSString *_value;
    NSNumber *_isValueSpeakable;
    AXMTaggedText *_taggedText;
    AXMVisionFeatureColorInfo *_colorInfo;
    AXMVisionFeatureAssetMetadata *_assetMetadata;
    double _blur;
    double _brightness;
    double _confidence;
    struct CGAffineTransform _horizonTransform;
    float _horizonAngle;
    AXMVisionFeatureFaceDetectionResult *_faceDetectionResult;
    unsigned long long _faceId;
    CDStruct_14d5dc5e _facePose;
    struct CGSize _canvasSize;
    NSString *_modelID;
    NSString *_classificationLabel;
    NSString *_classificationLocalizedValue;
    NSString *_caption;
    AXMVisionFeatureAestheticsResult *_aestheticsResult;
    CMDeviceMotion *_deviceMotion;
    long long _deviceOrientation;
    long long _cameraType;
    NSObject<NSSecureCoding> *_userContext;
    NSDictionary *_debugRectangles;
    struct CGRect _unpaddedDetectedFaceRect;
}

@property (nonatomic, readonly) AXMTaggedText *taggedText;
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext;
@property (retain, nonatomic) NSDictionary *debugRectangles;
@property (nonatomic, readonly) unsigned long long featureType;
@property (nonatomic, readonly) _Bool isBarcode;
@property (nonatomic, readonly) _Bool isFace;
@property (nonatomic, readonly) _Bool isRealtimeFace;
@property (nonatomic, readonly) _Bool isPerson;
@property (nonatomic, readonly) _Bool isSceneClassification;
@property (nonatomic, readonly) _Bool isObjectClassification;
@property (nonatomic, readonly) _Bool isBrightness;
@property (nonatomic, readonly) _Bool isBlur;
@property (nonatomic, readonly) _Bool isHorizon;
@property (nonatomic, readonly) _Bool isColor;
@property (nonatomic, readonly) _Bool isMediaLegibility;
@property (nonatomic, readonly) _Bool isAssetMetadata;
@property (nonatomic, readonly) _Bool isRectangle;
@property (nonatomic, readonly) _Bool isModelClassification;
@property (nonatomic, readonly) _Bool isCaption;
@property (nonatomic, readonly) _Bool isMotion;
@property (nonatomic, readonly) _Bool isCameraMetadata;
@property (nonatomic, readonly) _Bool isProminentObject;
@property (nonatomic, readonly) _Bool isIconClass;
@property (nonatomic, readonly) _Bool isImageAesthetics;
@property (nonatomic, readonly) _Bool isOCR;
@property (nonatomic, readonly) _Bool isTextDocument;
@property (nonatomic, readonly) _Bool isTextRegion;
@property (nonatomic, readonly) _Bool isTextLine;
@property (nonatomic, readonly) _Bool isTextSequence;
@property (nonatomic, readonly) _Bool isTextCharacter;
@property (nonatomic, readonly) _Bool isTextDiacritic;
@property (nonatomic, readonly) NSArray *subfeatures;
@property (nonatomic, readonly) double creationDate;
@property (nonatomic, readonly) struct CGSize canvasSize;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) struct CGRect normalizedFrame;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) _Bool isValueSpeakable;
@property (nonatomic, readonly) NSString *classificationLabel;
@property (nonatomic, readonly) NSString *classificationLocalizedValue;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *barcodeType;
@property (nonatomic, readonly) long long ocrFeatureType;
@property (nonatomic, readonly) AXMLanguage *textDetectionLanguage;
@property (nonatomic, readonly) AXMVisionFeatureColorInfo *colorInfo;
@property (nonatomic, readonly) AXMVisionFeatureAssetMetadata *assetMetadata;
@property (nonatomic, readonly) double blur;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) AXMVisionFeatureFaceDetectionResult *faceDetectionResult;
@property (nonatomic, readonly) unsigned long long faceId;
@property (nonatomic, readonly) struct CGRect unpaddedDetectedFaceRect;
@property (nonatomic, readonly) struct CGAffineTransform horizonTransform;
@property (nonatomic, readonly) float horizonAngle;
@property (nonatomic, readonly) AXMVisionFeatureAestheticsResult *aestheticsResult;
@property (nonatomic, readonly) CMDeviceMotion *deviceMotion;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) long long cameraType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithFaceDetectionResult:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)featureWithImageAestheticsObservation:(id)arg1;
+ (id)featureWithVisionRequest:(id)arg1 modelClassificationResult:(id)arg2 modelIdentifier:(id)arg3 canvasSize:(struct CGSize)arg4;
+ (id)featureWithVisionRequest:(id)arg1 blurValue:(float)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithMediaLegibility:(id)arg1;
+ (id)featureWithVisionRequest:(id)arg1 textResult:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)featureWithVisionRequest:(id)arg1 recognizedTextResult:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textLineWithBoundingBox:(struct CGRect)arg1 sequences:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textRegionWithBoundingBox:(struct CGRect)arg1 lines:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textDocumentWithBoundingBox:(struct CGRect)arg1 regions:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)featureWithCameraType:(long long)arg1;
+ (id)featureWithIconClass:(id)arg1 confidence:(double)arg2;
+ (id)featureWithCaptionResult:(id)arg1 confidence:(double)arg2 modelIdentifier:(id)arg3 canvasSize:(struct CGSize)arg4;
+ (id)featureWithAssetMetadata:(id)arg1;
+ (id)featureWithDeviceMotion:(id)arg1 orientation:(long long)arg2;
+ (id)prominentObjectWithBoundingBox:(struct CGRect)arg1 canvasSize:(struct CGSize)arg2 confidence:(double)arg3;
+ (struct CGRect)_aspectFaceRectFromSquareFaceRect:(struct CGRect)arg1 sizeInPixels:(struct CGSize)arg2;
+ (id)nameForFeatureType:(unsigned long long)arg1;
+ (long long)locationForNormalizedFrame:(struct CGRect)arg1 previousLocation:(long long)arg2 usingThirds:(_Bool)arg3;
+ (void)_append:(id)arg1 toList:(id)arg2;
+ (id)nameForLocation:(long long)arg1;
+ (id)featureWithMetadata:(id)arg1 interfaceOrientation:(long long)arg2 isMirrored:(_Bool)arg3 canvasSize:(struct CGSize)arg4;
+ (id)personWithBoundingBox:(struct CGRect)arg1 confidence:(double)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 brightnessValue:(float)arg2 canvasSize:(struct CGSize)arg3;
+ (id)objectClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 boundingBox:(struct CGRect)arg3 confidence:(float)arg4 canvasSize:(struct CGSize)arg5;
+ (id)sceneClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 confidence:(float)arg3 canvasSize:(struct CGSize)arg4;
+ (id)featureWithTaxonomyNode:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)featureWithColorInfo:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)localizedStringForLocation:(long long)arg1 isSubjectImplicit:(_Bool)arg2;
+ (id)nameForOCRType:(long long)arg1;
+ (id)flattenedFeatureList:(id)arg1;
+ (id)unitTestingFaceFeatureWithSize:(struct CGSize)arg1 faceFrame:(struct CGRect)arg2;
+ (id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(struct CGSize)arg2 frame:(struct CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6 subFeatures:(id)arg7;
+ (id)unitTestingFeature;
+ (id)unitTestingFaceFeature;
+ (id)unitTestingProminentObjectFeature;
+ (id)unitTestingHorizonFeature;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2;
- (id)_nameForOCRFeatureType:(long long)arg1;
- (id)_valueForTextFeature;
- (_Bool)_isTextFeatureValueSpeakable;
- (long long)locationUsingThirds:(_Bool)arg1;
- (_Bool)isEqualToAXMVisionFeature:(id)arg1;
- (CDStruct_14d5dc5e)facePose;

@end
