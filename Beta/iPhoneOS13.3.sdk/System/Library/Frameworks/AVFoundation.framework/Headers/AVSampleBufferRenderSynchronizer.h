/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVSampleBufferRenderSynchronizerInternal, NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject

{
    AVSampleBufferRenderSynchronizerInternal *_synchronizerInternal;
}

@property (readonly) NSArray *renderers;
@property (retain, readonly) struct OpaqueCMTimebase *timebase;
@property (nonatomic) float rate;

+ (id)currentFigRenderSynchronizerFactory;
+ (void)setFigRenderSynchronizerFactory:(id)arg1 forQueue:(id)arg2;

- (id)init;
- (void)dealloc;
- (CDStruct_1b6d18a9)currentTime;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)addRenderer:(id)arg1;
- (void)removeRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (int)_initializeTimebase;
- (_Bool)_rendererConfigurationIsValid:(id *)arg1;
- (void)_updateRateFromTimebase;
- (_Bool)_canAddRendererInternal:(id)arg1 error:(id *)arg2;
- (_Bool)_addRenderer:(id)arg1 error:(id *)arg2;
- (void)_performRendererRemoval:(id)arg1;
- (id)_getTimebaseObserverForRenderer:(id)arg1;
- (CDUnknownBlockType)_getClientCompletionHandlerForRenderer:(id)arg1;
- (void)_removeTimebaseObserverForRenderer:(id)arg1;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_storeObserver:(id)arg1 clientCompletionHandler:(CDUnknownBlockType)arg2 forRenderer:(id)arg3;
- (void)removeRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withClientCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_multipleAudioRenderersDisallowed;
- (long long)_addedAudioRendererCountInternal;
- (long long)_addedAudioRendererCount;

@end
