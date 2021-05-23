/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol SpeedRangeDelegate;

__attribute__((visibility("hidden")))
@interface SpeedRanges : NSObject

{
    int _editCount;
    int _mediaDuration;
    NSObject<SpeedRangeDelegate> *_delegate;
    SpeedRanges *_ramped;
    NSMutableArray *_array;
    SpeedRanges *_old;
}

@property (retain, nonatomic) SpeedRanges *ramped;
@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) SpeedRanges *old;
@property int editCount;
@property (nonatomic) int mediaDuration;
@property (nonatomic, readonly) _Bool isEdited;
@property (weak, nonatomic) NSObject<SpeedRangeDelegate> *delegate;

+ (id)objectFromPlist:(id)arg1;
+ (void)rangesFromSloMoAsset:(id)arg1 userAdjustedOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)firstObject;
- (id)lastObject;
- (id)initWithDuration:(int)arg1;
- (void)willChange;
- (int)mediaTimeForClipTime:(int)arg1;
- (int)clipTimeForMediaTime:(int)arg1;
- (void)didChange;
- (float)mediaTimeFloatForClipTime:(int)arg1;
- (void)removeShortRanges;
- (void)updateLinks;
- (id)speedRangeAtClipTime:(int)arg1;
- (void)_removeBackToBackFreezes;
- (id)generateRamps;
- (void)testRamps;
- (void)testUberRamp;
- (id)plistRepresentation;
- (id)setFromAdjustmentData:(id)arg1;
- (int)mapClipTime:(int)arg1 fromMap:(id)arg2;

@end
