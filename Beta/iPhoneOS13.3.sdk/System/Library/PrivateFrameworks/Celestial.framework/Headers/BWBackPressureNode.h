/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWLimitedGMErrorLogger, NSMutableArray, NSObject;

@protocol OS_dispatch_semaphore;

@interface BWBackPressureNode : BWNode

{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned int _numberOfInputs;
    NSMutableArray *_receivedPresentationTimestampByInput;
    struct os_unfair_lock_s _presentationTimestampLock;
    long long _initialSemaphoreValue;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (void)_handleUpdatedPresentationTimestamp:(CDStruct_1b6d18a9)arg1 forIndex:(unsigned long long)arg2;
- (id)initWithNumberOfInputsAndOutputs:(unsigned int)arg1 initialSemaphoreValue:(long long)arg2;
- (void)setInitialSemaphoreValue:(int)arg1;
- (void)setSemaphore:(id)arg1;

@end
