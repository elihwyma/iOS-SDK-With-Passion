/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AudioSessionDelegate : NSObject

{
    _Bool _isUsingSpeaker;
    _Bool _isUsingAudioInput;
    _Bool _interruptions;
    _Bool _preventSessionChanges;
}

@property (nonatomic) _Bool isUsingSpeaker;
@property (nonatomic) _Bool isUsingAudioInput;
@property (nonatomic) _Bool interruptions;
@property (nonatomic) _Bool preventSessionChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)inputIsAvailable;
- (void)beginInterruption;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)inputIsAvailableChanged:(_Bool)arg1;
- (_Bool)becomeInactive;
- (_Bool)becomeActiveWithWantsAudioInput:(_Bool)arg1;
- (void)routeDidChange;
- (void)sdf;
- (void)ignoreInterruptionsMode;
- (void)normalInterruptionsMode;
- (float)volumeDBtoSlider:(float)arg1;
- (float)sliderToDB:(float)arg1;

@end
