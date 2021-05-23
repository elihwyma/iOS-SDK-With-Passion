/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <CoreRecognition/CRCameraReaderOutput.h>

@class NSNumber;

@interface CRCameraReaderOutputExpirationDate : CRCameraReaderOutput

@property (readonly) NSNumber *yearValue;
@property (readonly) NSNumber *monthValue;
@property (readonly) NSNumber *dayValue;

@end
