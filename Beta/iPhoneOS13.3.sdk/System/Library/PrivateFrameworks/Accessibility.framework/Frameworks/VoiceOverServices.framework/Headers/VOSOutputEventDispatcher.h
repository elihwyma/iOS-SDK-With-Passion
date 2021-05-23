/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue, VOSHapticPack, VOSSoundPack;

@interface VOSOutputEventDispatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_eventHandlers;
    id <VOSSoundPack> _cachedActiveSoundPack;
    id <VOSHapticPack> _cachedActiveHapticPack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)sendEvent:(id)arg1;
- (void)addEventHandler:(id)arg1;
- (void)removeEventHandler:(id)arg1;
- (id)_activeSoundPack;
- (id)_activeHapticPack;
- (_Bool)shouldPlaySoundForEvent:(id)arg1;
- (_Bool)shouldPlayHapticForEvent:(id)arg1;

@end
