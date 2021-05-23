/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPCNNData, VCPCNNModel;

@interface VCPContentAnalysis : NSObject

{
    VCPCNNModel *_model;
    VCPCNNData *_input;
    unsigned long long _previousContentType;
    struct __CVBuffer *_argbPixelBuffer;
    struct OpaqueVTPixelTransferSession *_argbTransferSession;
}

+ (id)contentAnalysis;

- (id)init;
- (void)dealloc;
- (void)copyBlock:(char *)arg1 withStride:(unsigned long long)arg2 toBlock:(float *)arg3;
- (int)blockContentDetection:(unsigned long long *)arg1;
- (int)detectPixelBuffer:(struct __CVBuffer *)arg1 contentType:(unsigned long long *)arg2;

@end
