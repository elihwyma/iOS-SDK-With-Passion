/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIAngularSparkUpdate : NSObject

{
    float _finalBirthTime;
    float _finalDeathTime;
    CDStruct_c8d035bd *_sparks;
    unsigned long long _particleCount;
    unsigned long long _bufferOffset;
}

@property (nonatomic, readonly) CDStruct_c8d035bd *sparks;
@property (nonatomic, readonly) unsigned long long particleCount;
@property (nonatomic, readonly) unsigned long long bufferOffset;
@property (nonatomic) float finalBirthTime;
@property (nonatomic) float finalDeathTime;

- (void)dealloc;
- (id)updateByAppendingUpdate:(id)arg1;
- (id)initWithParticleCount:(unsigned long long)arg1 bufferOffset:(unsigned long long)arg2;

@end
