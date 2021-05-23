/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KenBurnsClip.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CompoundClip : KenBurnsClip

{
    double _minimumPhotoDuration;
    double _idealPhotoDuration;
    double _maximumPhotoDuration;
    KenBurnsClip *_kenBurnsClip;
}

@property (retain, nonatomic) KenBurnsClip *kenBurnsClip;
@property (nonatomic) double minimumPhotoDuration;
@property (nonatomic) double idealPhotoDuration;
@property (nonatomic) double maximumPhotoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)containedClips;
- (id)initWithKenBurnsClip:(id)arg1;
- (void)turnOffKenBurnsForClips:(id)arg1;
- (id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 transitionEffectProperties:(id)arg3 betweenClips:(id)arg4;
- (void)takePropertiesFromKenBurnsClip:(id)arg1;
- (_Bool)expandsEditList;
- (id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 betweenClips:(id)arg3;

@end
