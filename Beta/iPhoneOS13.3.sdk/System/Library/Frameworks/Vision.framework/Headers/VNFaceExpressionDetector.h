/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceExpressionDetector : VNDetector

{
    struct shared_ptr<vision::mod::LandmarkAttributes> m_FaceAttributesImpl;
    _Bool modelFilesWereMemmapped;
    id <VNModelFile> m_LandmarkRefinerModelFileHandle;
}

+ (int)expressionTypeFromString:(id)arg1;
+ (id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1;
+ (id)createExpressionDetectionDictionaryFromScores:(id)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;

@end
