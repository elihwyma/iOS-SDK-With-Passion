/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKPointerSet, NSMapTable, NSMutableArray, NSString;

@protocol CRKOrderedOneToManyKVOAccumulatorDelegate;

@interface CRKOrderedOneToManyKVOAccumulator : NSObject

{
    CRKPointerSet *mInsertedObjects;
    CRKPointerSet *mReplacementObjects;
    NSMapTable *mIndexForDeletedObject;
    NSMapTable *mOriginalIndexOfMovedObject;
    NSMutableArray *mObservedShadow;
    long long mInitialArrayCount;
    id <CRKOrderedOneToManyKVOAccumulatorDelegate> _delegate;
    NSString *_observedKeyPath;
    NSObject *_observedObject;
}

@property (nonatomic, readonly) _Bool hasChanges;
@property (copy, nonatomic) NSString *observedKeyPath;
@property (weak, nonatomic) NSObject *observedObject;
@property (weak, nonatomic) id <CRKOrderedOneToManyKVOAccumulatorDelegate> delegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_reset;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;
- (void)_drain;
- (_Bool)_integrateChange:(id)arg1 toArray:(id)arg2;
- (unsigned long long)_prestateIndexForImmediateIndex:(unsigned long long)arg1;
- (void)_validateArrayChangeToFinalCount:(long long)arg1 accumulatedResults:(id)arg2;
- (id)_resultsToArriveAtArray:(id)arg1;

@end
