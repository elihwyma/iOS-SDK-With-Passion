/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface VNFaceprintGenerator : VNDetector

{
    shared_ptr_b26ea6de m_FaceDescriptorImpl;
    struct shared_ptr<vision::mod::FaceFrontalizer> m_FaceFrontalizerImpl;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> m_DescriptorAugmenter;
    struct shared_ptr<unsigned char> m_FaceFrontalizerWorkingBuffer;
    struct vImage_Buffer m_FaceFrontalizerImageBuffer;
    _Bool _useLowPriorityMode;
    unsigned long long _metalContextPriority;
    unsigned long long _length;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) _Bool useLowPriorityMode;
@property (nonatomic, readonly) unsigned long long metalContextPriority;

+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (CDUnknownFunctionPointerType)faceDescriptorCreator;
+ (struct CGRect)faceBoundingBox:(id)arg1;
+ (struct __CVBuffer *)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(struct CGRect)arg2 error:(id *)arg3;
+ (MISSING_TYPE *)frontalizer;
+ (CDUnknownFunctionPointerType)getFaceJunkClassifier;
+ (_Bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)isFaceprinterCompatibleWithFaceprinterCreatedWithOptions:(id)arg1;
- (void)printDebugInfoFor:(struct __CVBuffer *)arg1 imageBuffer:(id)arg2 originalImageLumaCrop:(struct vImage_Buffer)arg3 faceBBoxInLumaCropCoordinates:(struct CGRect)arg4 magnifiedBBoxInLumaCropCoordinates:(struct _Geometry2D_rect2D_)arg5;

@end
