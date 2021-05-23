/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSString;

@protocol EARPSRAudioProcessorDelegate, OS_dispatch_queue;

@interface EARPSRAudioProcessor : NSObject

{
    struct shared_ptr<quasar::PSRAudioProcessor> _audioProcessor;
    struct SystemConfig _sysConfig;
    unsigned long long _sampleRate;
    NSString *_configRoot;
    id <EARPSRAudioProcessorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id <EARPSRAudioProcessorDelegate> delegate;
@property (retain, nonatomic) NSString *configRoot;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;

- (void)dealloc;
- (id).cxx_construct;
- (void)endAudio;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5;
- (void)_startComputeTask;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4;
- (void)addAudio:(id)arg1;
- (void)resetForNewRequest;

@end
