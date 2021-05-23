/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceDetector : VNDetector

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)shouldDumpDebugIntermediates;
+ (void)printDebugInfo:(id)arg1 facesDataRaw:(vector_41a7cb1a *)arg2 faceDetectorBGRAImage:(struct __CVBuffer *)arg3 tempImage:(struct vImage_Buffer)arg4;

- (void)purgeIntermediates;

@end
