/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray, NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer

{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
    NSString *_resConfig;
    NSMutableArray *_persons;
    NSMutableArray *_results;
    _Bool _saveKeypoints;
    int _inputWidth;
    int _inputHeight;
    _Bool _trackingMode;
}

@property _Bool trackingMode;

+ (id)sharedModel:(id)arg1;
+ (_Bool)saveKeypoints;

- (id)init;
- (void)dealloc;
- (int)createModelWithHeight:(int)arg1 srcWidth:(int)arg2;
- (int)parsePersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)processPersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;
- (int)generateHumanPose:(struct __CVBuffer *)arg1;
- (id)initWithKeypointsOption:(_Bool)arg1 aspectRatio:(id)arg2 lightweight:(_Bool)arg3;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;

@end
