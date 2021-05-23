/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, VNMetalContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNDetector : NSObject

{
    NSDictionary *_configurationOptions;
    NSObject<OS_dispatch_queue> *_processingQueue;
    unsigned long long _requestRevision;
    VNMetalContext *_metalContext;
    unsigned long long _backingStore;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (copy, readonly) NSDictionary *configurationOptions;
@property (nonatomic, readonly) VNMetalContext *metalContext;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) unsigned long long backingStore;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (id)detectorName;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)detectorWithConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2;

- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)useGPU;
- (id)initWithConfigurationOptions:(id)arg1;
- (_Bool)warmUpWithOptions:(id)arg1 error:(id *)arg2;
- (id)processInSynchronizationQueueUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (_Bool)currentQueueIsSynchronizationQueue;
- (_Bool)validateImageBuffer:(id)arg1 error:(id *)arg2;
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id *)arg2;
- (_Bool)needsMetalContext;
- (id)newMetalContextForConfigurationOptions:(id)arg1 error:(id *)arg2;
- (_Bool)getOptionalCanceller:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;
- (id)requiredCancellerInOptions:(id)arg1 error:(id *)arg2;
- (id)validatedProcessingDeviceInOptions:(id)arg1 error:(id *)arg2;
- (void)updateConfigurationOptionsWithObject:(id)arg1 forKey:(id)arg2;

@end
