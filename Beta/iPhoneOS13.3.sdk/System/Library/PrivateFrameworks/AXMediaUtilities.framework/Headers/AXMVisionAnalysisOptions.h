/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMTextDetectionOptions, NSArray;

@interface AXMVisionAnalysisOptions : NSObject

{
    _Bool _detectFaceRectangles;
    _Bool _detectFaceNames;
    _Bool _detectFaceAttributes;
    _Bool _detectFaceExpressions;
    _Bool _detectFaceLandmarks;
    _Bool _detectFacePose;
    _Bool _detectScenes;
    _Bool _detectModelClassifications;
    _Bool _detectCaptions;
    _Bool _detectTraits;
    _Bool _detectRectangles;
    _Bool _detectHorizon;
    _Bool _detectProminentObjects;
    _Bool _detectAesthetics;
    _Bool _detectIconClass;
    _Bool _detectText;
    _Bool _includeImageInResult;
    long long _clientID;
    AXMTextDetectionOptions *_textDetectionOptions;
    NSArray *_ignoredLayerContextIDs;
}

@property (nonatomic) long long clientID;
@property (nonatomic, readonly) _Bool hasDetectionsEnabled;
@property (nonatomic, readonly) _Bool detectFaces;
@property (nonatomic) _Bool detectFaceRectangles;
@property (nonatomic) _Bool detectFaceNames;
@property (nonatomic) _Bool detectFaceAttributes;
@property (nonatomic) _Bool detectFaceExpressions;
@property (nonatomic) _Bool detectFaceLandmarks;
@property (nonatomic) _Bool detectFacePose;
@property (nonatomic) _Bool detectScenes;
@property (nonatomic) _Bool detectModelClassifications;
@property (nonatomic) _Bool detectCaptions;
@property (nonatomic) _Bool detectTraits;
@property (nonatomic) _Bool detectRectangles;
@property (nonatomic) _Bool detectHorizon;
@property (nonatomic) _Bool detectProminentObjects;
@property (nonatomic) _Bool detectAesthetics;
@property (nonatomic) _Bool detectIconClass;
@property (nonatomic) _Bool detectText;
@property (retain, nonatomic) AXMTextDetectionOptions *textDetectionOptions;
@property (nonatomic) _Bool includeImageInResult;
@property (retain, nonatomic) NSArray *ignoredLayerContextIDs;

+ (_Bool)supportsSecureCoding;
+ (id)defaultOptions;
+ (id)voiceOverOptions;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
