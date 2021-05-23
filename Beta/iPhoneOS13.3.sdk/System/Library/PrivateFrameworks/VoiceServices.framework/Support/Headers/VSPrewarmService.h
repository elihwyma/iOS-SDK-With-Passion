/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class VSSpeechEngine, VSVoiceResourceAsset;

@protocol OS_dispatch_queue;

@interface VSPrewarmService : NSObject

{
    VSSpeechEngine *_cachedEngine;
    VSVoiceResourceAsset *_loadedResources;
    NSObject<OS_dispatch_queue> *_prewarmQueue;
}

@property (retain, nonatomic) VSSpeechEngine *cachedEngine;
@property (retain, nonatomic) VSVoiceResourceAsset *loadedResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue;

+ (id)sharedService;

- (id)init;
- (void)prewarmWithRequest:(id)arg1;
- (id)cachedEngineForVoice:(id)arg1 resources:(id)arg2;
- (id)loadEngineForVoice:(id)arg1 resources:(id)arg2;
- (id)_cachedEngineForVoice:(id)arg1 resources:(id)arg2;
- (id)_engineForVoice:(id)arg1 resources:(id)arg2;
- (void)_loadVoiceResources:(id)arg1 forEngine:(id)arg2;
- (id)engineForVoice:(id)arg1 resources:(id)arg2;
- (void)waitUntilPrewarmFinish;

@end
