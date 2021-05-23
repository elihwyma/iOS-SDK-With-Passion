/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, TSTLayout;

@interface TSTLayoutHint : NSObject

{
    _Bool mIsValid;
    _Bool mHorizontal;
    CDStruct_5f1f7aa9 mCellRange;
    CDStruct_0441cfb5 mCacheHintID;
    NSNumber *mPartitioningPass;
    unsigned int mPartitionPosition;
    struct CGSize mMaximumSize;
    struct CGSize mEffectiveSize;
    TSTLayout *mLayout;
}

@property (nonatomic) _Bool isValid;
@property (nonatomic) CDStruct_5f1f7aa9 cellRange;
@property (nonatomic) CDStruct_0441cfb5 cacheHintID;
@property (retain, nonatomic) NSNumber *partitioningPass;
@property (nonatomic) unsigned int partitionPosition;
@property (nonatomic) struct CGSize maximumSize;
@property (nonatomic) struct CGSize effectiveSize;
@property (nonatomic) TSTLayout *layout;
@property (nonatomic) _Bool horizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (Class)archivedHintClass;

- (id)init;
- (void)dealloc;
- (oneway void)release;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)overlapsWithSelection:(id)arg1;
- (void)offsetByDelta:(int)arg1;
- (id)firstChildHint;
- (id)lastChildHint;
- (id)copyForArchiving;
- (_Bool)isFirstHint;
- (id)initWithRange:(CDStruct_5f1f7aa9)arg1 hintId:(CDStruct_0441cfb5)arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize)arg4 effectiveSize:(struct CGSize)arg5 layout:(id)arg6 validity:(_Bool)arg7 horizontal:(_Bool)arg8;

@end
