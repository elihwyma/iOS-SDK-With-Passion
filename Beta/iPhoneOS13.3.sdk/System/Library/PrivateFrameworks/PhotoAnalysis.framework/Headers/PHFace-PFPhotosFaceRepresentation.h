/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Photos/PHFace.h>

@class NSData, NSString;

@interface PHFace (PFPhotosFaceRepresentation)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) long long clusterSequenceNumber;
@property (nonatomic, readonly) NSData *faceprintData;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic, readonly) unsigned short ageType;

- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBlurScore;
- (_Bool)photosFaceRepresentationHasSmile;
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;
- (_Bool)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;

@end
