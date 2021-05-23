/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, VNCanceller, VNProcessingDevice, VNRequestConfiguration, VNWarningRecorder;

@protocol MTLDevice, OS_dispatch_queue, OS_dispatch_semaphore;

@interface VNRequest : NSObject

{
    CDUnknownBlockType _completionHandler;
    VNRequestConfiguration *_configuration;
    NSDictionary *_options;
    VNWarningRecorder *_warningRecorder;
    VNCanceller *_canceller;
    _Bool _cancellationTriggered;
    NSObject<OS_dispatch_semaphore> *_cancellationSemaphore;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    unsigned long long _revision;
    NSArray *_results;
}

@property (retain) NSObject<OS_dispatch_semaphore> *cancellationSemaphore;
@property (copy, nonatomic, readonly) NSDictionary *options;
@property (readonly) _Bool cancellationTriggered;
@property (nonatomic) unsigned long long modelFileBackingStore;
@property (retain, nonatomic) id <MTLDevice> preferredMetalContext;
@property (nonatomic) unsigned long long metalContextPriority;
@property (nonatomic) unsigned long long detectionLevel;
@property (copy, nonatomic) VNProcessingDevice *processingDevice;
@property (nonatomic) _Bool preferBackgroundProcessing;
@property (nonatomic) _Bool usesCPUOnly;
@property (copy, nonatomic, readonly) NSArray *results;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic) unsigned long long revision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (Class)configurationClass;
+ (_Bool)supportsPrivateRevision:(unsigned long long)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;
+ (unsigned long long)resolvedRevisionForRevision:(unsigned long long)arg1;
+ (id)supportedRevisions;
+ (unsigned long long)defaultRevision;
+ (id)newConfigurationInstance;
+ (_Bool)defaultRequestInstanceWarmUpPerformer:(id)arg1 error:(id *)arg2;
+ (_Bool)getOptionalObject:(id *)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id *)arg5;
+ (_Bool)getRequiredObject:(id *)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id *)arg5;
+ (_Bool)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id *)arg5;
+ (_Bool)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id *)arg5;
+ (_Bool)getOptionalArray:(id *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id *)arg5;
+ (_Bool)getOptionalInputFacesArray:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;
+ (unsigned long long)_defaultRevisionForBuildVersion:(int)arg1;
+ (id)_introspectionBuiltSupportedRevisions;
+ (unsigned long long)currentRevision;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (id)configuration;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setResults:(id)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (long long)dependencyProcessingOrdinality;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)allowsCachingOfResults;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (CDUnknownBlockType)resultsSortingComparator;
- (_Bool)wantsSequencedRequestObservationsRecording;
- (id)newDefaultRequestInstance;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)valueForWarning:(id)arg1;
- (id)_defaultProcessingDevice;
- (void)_updateProcessingDeviceOption;
- (void)setValue:(id)arg1 forPrivateOption:(id)arg2;
- (id)valueForPrivateOption:(id)arg1;
- (void)setValue:(id)arg1 forRequestOption:(id)arg2;
- (_Bool)hasCancellationHook;
- (id)newDefaultDetectorOptions;
- (void)copyStateOfRequest:(id)arg1;
- (_Bool)performInContext:(id)arg1 error:(id *)arg2;
- (_Bool)validateConfigurationAndReturnError:(id *)arg1;
- (_Bool)internalCancelInContext:(id)arg1 error:(id *)arg2;
- (void)setSortedResults:(id)arg1;
- (id)warnings;
- (id)cancellerAndReturnError:(id *)arg1;
- (_Bool)cancellationTriggeredAndReturnError:(id *)arg1;
- (_Bool)validateImageBuffer:(id)arg1 ofNonZeroWidth:(unsigned long long *)arg2 andHeight:(unsigned long long *)arg3 error:(id *)arg4;
- (void)_setResolvedRevision:(unsigned long long)arg1;
- (_Bool)setPrivateRevision:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)resolvedRevision;
- (unsigned long long)compatibleRevisionForDependentRequest:(id)arg1;

@end
