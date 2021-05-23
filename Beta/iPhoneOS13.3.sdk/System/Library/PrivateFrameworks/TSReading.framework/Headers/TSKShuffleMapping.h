/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSKShuffleMapping : NSObject <Swift>

{
    unsigned short mStartIndex;
    unsigned short mEndIndex;
    unsigned short *mMapping;
    _Bool mIsVertical;
    _Bool mIsMoveOperation;
    unsigned short mFirstMovedIndex;
    unsigned short mDestinationIndexForMove;
    unsigned short mNumberOfIndicesMoved;
}

@property (nonatomic, readonly) unsigned short startIndex;
@property (nonatomic, readonly) unsigned short endIndex;
@property (nonatomic, readonly) unsigned short *mapping;
@property (nonatomic, readonly) unsigned short mappingSize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isVertical;
- (_Bool)isMove;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short *)arg3;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2;
- (id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(_Bool)arg4;
- (id)copyInverse;
- (unsigned short)mapIndex:(unsigned short)arg1;
- (unsigned short)reverseMapIndex:(unsigned short)arg1;
- (void)enumerateMappingRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(_Bool)arg3;
- (void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2;
- (void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2;

@end
