/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWMeaningfulSubjectDetectionContext : NSObject

{
    struct AcDetContext *handle;
    struct {
        unsigned char data[24];
    } state;
    struct {
        CDStruct_06462422 netInputBufferDesc[3];
        CDStruct_06462422 netOutputBufferDescs[3][24];
        char netOutputNames[3][24][32];
    } params;
    struct {
        unsigned int originalImageWidth;
        unsigned int originalImageHeight;
        int imageOrientation;
    } control;
    void *detectionPlan;
    CDStruct_2bc666a5 detectionNetwork;
    CDStruct_0a65202a detectionOutputs[24];
}

@property (nonatomic, readonly) void *detectionPlan;

+ (void)initialize;

- (void)dealloc;
- (id)initWithDetectionNetworkURL:(id)arg1 context:(void **)arg2 priority:(int)arg3;

@end
