/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject

{
    unsigned long long _count;
    NSMutableArray *_values;
    NSMutableArray *_times;
    long long _interpolationMode;
    long long _repeatMode;
    struct SKCKeyframeSequence *_cKeyframeSequence;
}

@property (nonatomic) long long interpolationMode;
@property (nonatomic) long long repeatMode;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (Class)_valueClass;
- (double)getKeyframeTimeForIndex:(unsigned long long)arg1;
- (id)getKeyframeValueForIndex:(unsigned long long)arg1;
- (id)initWithKeyframeValues:(id)arg1 times:(id)arg2;
- (void)_dirtySKCKeyframeSequence;
- (void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2;
- (struct SKCKeyframeSequence *)_createSKCKeyframeSequence;
- (void)addKeyframeValue:(id)arg1 time:(double)arg2;
- (void)removeLastKeyframe;
- (void)removeAllKeyframes;
- (void)removeKeyframeAtIndex:(unsigned long long)arg1;
- (void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3;
- (id)sampleAtTime:(double)arg1;
- (_Bool)isEqualToSequence:(id)arg1;

@end
