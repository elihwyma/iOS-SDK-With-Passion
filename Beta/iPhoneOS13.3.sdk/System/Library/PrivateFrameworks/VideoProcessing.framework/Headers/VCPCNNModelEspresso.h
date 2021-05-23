/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, VCPCNNEspressoContext;

__attribute__((visibility("hidden")))
@interface VCPCNNModelEspresso : NSObject

{
    struct {
        void *plan;
        int network_index;
    } _net;
    void *_plan;
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    NSArray *_outputNames;
    VCPCNNEspressoContext *_context;
    NSString *_resConfig;
    vector_7cb31c67 _inputBlobs;
    vector_7cb31c67 _outputBlobs;
    CDStruct_0a65202a _inputBlob;
    CDStruct_0a65202a _outputBlob;
}

@property (nonatomic) vector_7cb31c67 inputBlobs;
@property (nonatomic) vector_7cb31c67 outputBlobs;
@property (nonatomic) CDStruct_0a65202a inputBlob;
@property (nonatomic) CDStruct_0a65202a outputBlob;
@property (nonatomic, readonly) NSString *resConfig;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithParameters:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3;
- (int)espressoForward:(float *)arg1;
- (int)prepareModelWithConfig:(id)arg1;
- (int)softmax;
- (void)normalization:(float *)arg1;
- (int)getPlanPhase;
- (int)prepareModelInput:(float *)arg1;
- (int)prepareModelInputs:(vector_f351fd4e)arg1;
- (int)espressoForwardInputs:(vector_f351fd4e)arg1;
- (void *)getEspressoContext;

@end
