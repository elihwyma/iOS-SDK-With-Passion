//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIKineticSparkUpdate : NSObject
{
    float _finalBirthTime;
    float _finalDeathTime;
    CDStruct_58e0f28b _sparks;
    NSUInteger _particleCount;
    NSUInteger _bufferOffset;
}

@property(nonatomic) float finalDeathTime; // @synthesize finalDeathTime=_finalDeathTime;
@property(nonatomic) float finalBirthTime; // @synthesize finalBirthTime=_finalBirthTime;
@property(readonly, nonatomic) NSUInteger bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(readonly, nonatomic) NSUInteger particleCount; // @synthesize particleCount=_particleCount;
@property(readonly, nonatomic) CDStruct_58e0f28b sparks; // @synthesize sparks=_sparks;
- (void)dealloc;
- (id)updateByAppendingUpdate:(id)arg1;
- (id)initWithParticleCount:(NSUInteger)arg1 bufferOffset:(NSUInteger)arg2;

@end
