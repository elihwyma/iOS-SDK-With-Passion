/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class AUAudioUnit, AVAudioFormat, NSArray, NSString;

@interface AUAudioUnitBus : NSObject

{
    _Bool _removingObserverWithContext;
    AVAudioFormat *_format;
    NSArray *_supportedChannelCounts;
    unsigned int _maximumChannelCount;
    _Bool _enabled;
    _Bool _shouldAllocateBuffer;
    NSString *_name;
    unsigned long long _index;
    long long _busType;
    AUAudioUnit *_ownerAudioUnit;
    NSArray *_supportedChannelLayoutTags;
    double _contextPresentationLatency;
    vector_e102d759 _observers;
}

@property (nonatomic) vector_e102d759 observers;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic) _Bool shouldAllocateBuffer;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) long long busType;
@property (nonatomic, readonly) AUAudioUnit *ownerAudioUnit;
@property (copy, nonatomic, readonly) NSArray *supportedChannelLayoutTags;
@property (nonatomic) double contextPresentationLatency;

- (void)dealloc;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (id).cxx_construct;
- (void)setIndex:(unsigned long long)arg1;
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;
- (void)setOwnerAudioUnit:(id)arg1;
- (void)setBusType:(long long)arg1;
- (id)initWithFormat:(id)arg1 error:(id *)arg2;
- (void)setSupportedChannelCounts:(id)arg1;
- (id)supportedChannelCounts;
- (unsigned int)maximumChannelCount;
- (void)setMaximumChannelCount:(unsigned int)arg1;

@end
