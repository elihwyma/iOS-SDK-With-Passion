/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSTStrokeRunArray : NSObject

{
    _Bool mHasCustomStrokes;
    double mMaxWidth;
    unsigned int mCount;
    unsigned int mAllocCount;
    unsigned int mLastLookup;
    struct TSTStrokeRun *mStrokes;
    struct _opaque_pthread_rwlock_t mRWLock;
}

@property (nonatomic, readonly) double maxWidth;

- (void)dealloc;
- (id)description;
- (id)initWithCount:(unsigned int)arg1;

@end
