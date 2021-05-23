/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <CoreRecognition/CRCameraReaderOutput.h>

@class NSAttributedString;

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (copy) NSAttributedString *overlayString;
@property (readonly) struct CGRect boundingBox;
@property (readonly) float rotation;

- (void)setRotation:(float)arg1;
- (void)setBoundingBox:(struct CGRect)arg1;

@end
