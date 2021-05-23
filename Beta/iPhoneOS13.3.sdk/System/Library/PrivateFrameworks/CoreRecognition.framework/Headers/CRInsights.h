/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol CRInsightsDelegate;

@interface CRInsights : NSObject

{
    id <CRInsightsDelegate> _delegate;
    NSMutableDictionary *_threadsToContexts;
}

@property (retain, nonatomic) NSMutableDictionary *threadsToContexts;
@property (weak) id <CRInsightsDelegate> delegate;

+ (id)sharedInsights;
+ (void)dispatchAsyncOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

- (id)init;
- (id)currentContext;
- (void)attachContextToCurrentThread:(id)arg1;
- (id)cameraReaderForCurrentThread;
- (void)resetContextForCurrentThread;
- (id)allowOverrideWithKey:(id)arg1 forValue:(id)arg2;
- (id)takeContextSnapshot;
- (void)attachContextCopyToCurrentThread:(id)arg1;
- (void)attachNewContextToCurrentThreadWithCameraReader:(id)arg1;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)notifySampleBufferProcessingStart:(struct opaqueCMSampleBuffer *)arg1;
- (void)notifySampleBufferProcessingEnd:(struct opaqueCMSampleBuffer *)arg1;
- (void)provideInsightValue:(id)arg1 forKey:(id)arg2;
- (id)enterSection:(id)arg1 withDescription:(id)arg2;
- (void)leaveSection:(id)arg1;
- (id)allowOverrideWithKey:(id)arg1 forResultFromBlock:(CDUnknownBlockType)arg2;

@end
