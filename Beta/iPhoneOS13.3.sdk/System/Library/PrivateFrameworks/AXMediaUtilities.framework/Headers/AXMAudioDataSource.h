/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AXMAudioDataSource : NSObject

{
    _Bool _circular;
    vector_3203cf93 *_sampleBuffer;
    unsigned long long _length;
    unsigned long long _currentSampleIndex;
    double _level;
    NSArray *_effectsChain;
    NSString *_name;
    double _sampleRate;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) vector_3203cf93 *sampleBuffer;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long currentSampleIndex;
@property (nonatomic, getter=isCircular) _Bool circular;
@property (nonatomic) double level;
@property (nonatomic, readonly) NSArray *effectsChain;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(_Bool)arg3;
- (void)processEffects:(unsigned long long)arg1;
- (void)normalizeAudio;
- (void)addEffectToChain:(id)arg1;
- (void)removeEffectFromChain:(id)arg1;

@end
