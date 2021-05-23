/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDefaultHapticDeviceCapability : NSObject

{
    _Bool _supports3rdPartyHaptics;
}

@property (readonly) unsigned long long maximumNumberOfHapticChannels;
@property (readonly) unsigned long long maximumNumberOfAudioChannels;
@property (readonly) _Bool supportsHaptics;
@property (readonly) _Bool supportsAudio;

- (id)init;
- (id)initPrivate;
- (float)minimumValueForEventParameter:(id)arg1;
- (float)maximumValueForEventParameter:(id)arg1;
- (float)defaultValueForEventParameter:(id)arg1 eventType:(id)arg2;
- (float)minimumValueForDynamicParameter:(id)arg1;
- (float)maximumValueForDynamicParameter:(id)arg1;
- (float)defaultValueForDynamicParameter:(id)arg1;
- (id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id *)arg3;
- (id)attributesForDynamicParameter:(id)arg1 error:(id *)arg2;

@end
