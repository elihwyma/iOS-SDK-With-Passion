/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMVisionFeatureFaceAttributes, AXMVisionFeatureFaceLandmarks, NSDictionary, NSString, NSUUID;

@interface AXMVisionFeatureFaceDetectionResult : NSObject

{
    long long _likelyExpression;
    NSString *_name;
    NSUUID *_uuid;
    unsigned long long _faceId;
    double _rectanglesConfidence;
    double _nameConfidence;
    AXMVisionFeatureFaceAttributes *_attributes;
    double _attributesConfidence;
    NSDictionary *_expressionsAndConfidence;
    AXMVisionFeatureFaceLandmarks *_landmarks;
    AXMVisionFeatureFaceLandmarks *_landmarks3d;
    double _landmarksConfidence;
    double _poseConfidence;
    struct CGRect _frame;
    CDStruct_14d5dc5e _pose;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long faceId;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) double rectanglesConfidence;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double nameConfidence;
@property (retain, nonatomic) AXMVisionFeatureFaceAttributes *attributes;
@property (nonatomic) double attributesConfidence;
@property (retain, nonatomic) NSDictionary *expressionsAndConfidence;
@property (nonatomic, readonly) long long likelyExpression;
@property (retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks;
@property (retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks3d;
@property (nonatomic) double landmarksConfidence;
@property (nonatomic) CDStruct_14d5dc5e pose;
@property (nonatomic) double poseConfidence;

+ (_Bool)supportsSecureCoding;
+ (id)localizedStringFormatterForExpression:(id)arg1;
+ (id)nameForFaceExpression:(long long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)descriptionForExpression:(long long)arg1;
- (long long)_expressionForString:(id)arg1;
- (double)confidenceForExpression:(long long)arg1;

@end
