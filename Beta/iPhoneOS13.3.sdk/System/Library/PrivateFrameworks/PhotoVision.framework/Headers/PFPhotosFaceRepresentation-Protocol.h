/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@protocol PFPhotosFaceRepresentation

- (unsigned short)photosFaceRepresentationSourceWidth;
- (unsigned short)photosFaceRepresentationSourceHeight;
- (unsigned short)photosFaceRepresentationCenterX;
- (unsigned short)photosFaceRepresentationCenterY;
- (unsigned short)photosFaceRepresentationSize;
- (unsigned short)photosFaceRepresentationBlurScore;
- (unsigned short)photosFaceRepresentationHasSmile;
- (unsigned short)photosFaceRepresentationIsLeftEyeClosed;
- (unsigned short)photosFaceRepresentationIsRightEyeClosed;
- (unsigned short)photosFaceRepresentationQualityMeasure;
- (unsigned short)photosFaceRepresentationClusterSequenceNumber;
- (unsigned short)photosFaceRepresentationLocalIdentifier;
- (unsigned short)photosFaceRepresentationRoll;

@end
