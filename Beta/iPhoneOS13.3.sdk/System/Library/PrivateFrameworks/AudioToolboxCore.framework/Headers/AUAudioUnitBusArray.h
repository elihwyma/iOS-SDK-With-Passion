/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class AUAudioUnit, NSMutableArray;

@interface AUAudioUnitBusArray : NSObject

{
    NSMutableArray *_busses;
    _Bool _countChangeable;
    AUAudioUnit *_ownerAudioUnit;
    long long _busType;
    vector_e102d759 _observers;
}

@property (nonatomic) vector_e102d759 observers;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, getter=isCountChangeable) _Bool countChangeable;
@property (nonatomic, readonly) AUAudioUnit *ownerAudioUnit;
@property (nonatomic, readonly) long long busType;

- (id)init;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id).cxx_construct;
- (_Bool)setBusCount:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 busses:(id)arg3;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2;
- (void)addObserverToAllBusses:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserverFromAllBusses:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)indexBusses;
- (void)replaceBusses:(id)arg1;

@end
