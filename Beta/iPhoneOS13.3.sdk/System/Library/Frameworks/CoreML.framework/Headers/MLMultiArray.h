/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray;

@interface MLMultiArray : NSObject

{
    struct MultiArrayBuffer *_pArray;
    _Bool _managingData;
    CDUnknownBlockType _deallocator;
    NSArray *_shape;
    NSArray *_strides;
}

@property (nonatomic, readonly) unsigned long long numberOfBytesPerElement;
@property (nonatomic, readonly, getter=isManagingData) _Bool managingData;
@property (nonatomic, readonly, getter=isContiguous) _Bool contiguous;
@property (nonatomic, readonly) void *dataPointer;
@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) NSArray *strides;
@property (nonatomic, readonly) long long count;

+ (id)stringForDataType:(long long)arg1;
+ (vector_06e666a8)indexVectorFromArray:(id)arg1;
+ (id)arrayFromIndexVector:(const vector_06e666a8 *)arg1;
+ (int)cppStorageOrder:(long long)arg1;
+ (id)doubleMultiArrayWithCopyOfMultiArray:(id)arg1;
+ (id)doubleVectorWithValues:(id)arg1;
+ (id)doubleMultiArrayWithShape:(id)arg1 valueArray:(id)arg2 error:(id *)arg3;
+ (id)doubleMatrixWithValues:(id)arg1 error:(id *)arg2;
+ (struct __CVBuffer *)pixelBufferGray8FromMultiArrayHW:(id)arg1 error:(id *)arg2;
+ (struct __CVBuffer *)pixelBufferBGRA8FromMultiArrayCHW:(id)arg1 channelOrderIsBGR:(_Bool)arg2 error:(id *)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)debugQuickLookObject;
- (id)initWithDataPointer:(void *)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 deallocator:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 error:(id *)arg3;
- (id)numberAtOffset:(unsigned long long)arg1;
- (void)setNumber:(id)arg1 atOffset:(unsigned long long)arg2;
- (unsigned long long)offsetForKeyedSubscript:(id)arg1;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 error:(id *)arg4;
- (_Bool)isEqualToMultiArray:(id)arg1;
- (_Bool)isContiguousInOrder:(long long)arg1;
- (double *)doublePointer;
- (_Bool)copyIntoMultiArray:(id)arg1 error:(id *)arg2;
- (_Bool)vectorizeIntoMultiArray:(id)arg1 storageOrder:(long long)arg2 error:(id *)arg3;
- (_Bool)fillWithNumber:(id)arg1;
- (_Bool)setRangeWithRawData:(id)arg1 destIndex:(unsigned long long)arg2 error:(id *)arg3;
- (id)numberArray;
- (id)sliceAtOrigin:(id)arg1 shape:(id)arg2 squeeze:(_Bool)arg3 error:(id *)arg4;
- (id)squeeze;
- (id)squeezeDimensions:(id)arg1 error:(id *)arg2;
- (void *)multiArrayBuffer;

@end
