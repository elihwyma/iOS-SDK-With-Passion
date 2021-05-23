/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWEspressoInferenceContext : NSObject

{
    int _executionTarget;
    void *_espressoContext;
    unsigned long long _options;
    _Bool _shareIntermediateBuffer;
    void *_rootIntermediateBufferPlan;
    NSString *_sharedBufferNetworksPath;
}

@property (nonatomic, readonly) int executionTarget;
@property (nonatomic, readonly) void *espressoContext;
@property (nonatomic, readonly, getter=isPrepared) _Bool prepared;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithExecutionTarget:(int)arg1 shareIntermediateBuffer:(_Bool)arg2;
- (id)initWithExecutionTarget:(int)arg1;
- (int)prepareForInferenceUsingProcessingSession:(struct OpaqueFigCaptureISPProcessingSession *)arg1;
- (int)configureIntermediateBufferSharingForPlanPrebuild:(void *)arg1;
- (int)configureIntermediateBufferSharingForPlanPostbuild:(void *)arg1;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1;

@end
