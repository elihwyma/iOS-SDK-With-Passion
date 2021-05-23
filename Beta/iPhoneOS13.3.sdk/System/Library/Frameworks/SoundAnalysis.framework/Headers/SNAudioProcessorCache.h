/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SNAudioProcessorCache : NSObject

{
    NSMutableDictionary *_activeProcessorsCache;
}

- (id)init;
- (id)sharedProcessorWithConfiguration:(id)arg1;
- (id)audioProcessorWithConfiguration:(id)arg1;
- (id)createAudioProcessorWithConfiguration:(id)arg1;

@end
