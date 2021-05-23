/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWRenderList, BWRenderListParameters, BWSpringSimulation;

@protocol OS_dispatch_queue;

@interface BWRenderListAnimator : NSObject

{
    NSObject<OS_dispatch_queue> *_preparationMutexQueue;
    _Bool _preparationMutexQueuePrepared;
    BWRenderList *_interpolatingRenderList;
    BWRenderListParameters *_interpolatingParameters;
    BWSpringSimulation *_springSimulation;
    BWRenderList *_initialRenderList;
    BWRenderListParameters *_initialParameters;
    BWRenderList *_finalRenderList;
    BWRenderListParameters *_finalParameters;
}

@property (retain, nonatomic, readonly) BWRenderList *renderList;
@property (retain, nonatomic, readonly) BWRenderListParameters *parameters;
@property (retain, nonatomic, readonly) BWRenderList *initialRenderList;
@property (retain, nonatomic, readonly) BWRenderListParameters *initialParameters;
@property (retain, nonatomic, readonly) BWRenderList *finalRenderList;
@property (retain, nonatomic, readonly) BWRenderListParameters *finalParameters;
@property (nonatomic, readonly, getter=isPrepared) _Bool prepared;
@property (nonatomic, readonly, getter=isCompleted) _Bool completed;

+ (void)initialize;

- (void)dealloc;
- (id)interpolateParameters;
- (id)initWithInitialParameters:(id)arg1 initialRenderList:(id)arg2 finalParameters:(id)arg3 finalRenderList:(id)arg4;
- (void)prepareWithInputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2;
- (void)setPrepared:(_Bool)arg1;
- (void)_configureSpringSimulation;
- (_Bool)_parametersContainLiveStageRendering:(struct BWRenderListParameterList *)arg1;

@end
