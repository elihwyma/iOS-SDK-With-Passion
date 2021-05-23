/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TSDGLDataArrayBuffer : NSObject

{
    NSMutableArray *_vertexAttributes;
    unsigned long long mVertexCount;
    unsigned long long _dataTypeSizeInBytes;
    unsigned int _bufferUsage;
    _Bool _usesMetalBuffer;
    long long *mNeedsUpdateFirstIndex;
    long long *mNeedsUpdateLastIndex;
    char *mGLData;
    _Bool mGLDataBufferHasBeenSetup;
    unsigned int *mGLDataBuffers;
    NSMutableDictionary *mAttributeOffsetsDictionary;
    NSArray *_metalDataBuffers;
    unsigned long long _bufferIndex;
    unsigned long long _GLDataBufferEntrySize;
    unsigned long long _bufferCount;
    unsigned long long _currentBufferIndex;
}

@property (nonatomic, readonly) _Bool hasUpdatedData;
@property (nonatomic, readonly) unsigned long long GLDataBufferEntrySize;
@property (nonatomic, readonly) unsigned long long bufferCount;
@property (nonatomic) unsigned long long currentBufferIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (char *)dataPointer;
- (unsigned long long)vertexCount;
- (void)p_setupGLDataBufferIfNecessary;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange)arg1;
- (void)addIndexNeedsUpdate:(long long)arg1;
- (void)updateDataBufferIfNecessary;
- (void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1;
- (unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_f2e236b6)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint4D:(CDStruct_f2e236b6)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3;
- (void)addAllIndexesNeedUpdate;
- (void)enableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)disableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)swapGLDataBuffers;
- (char *)GLDataPointer;
- (void)enableArrayBufferWithDevice:(id)arg1;
- (void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2;
- (void)swapGPUDataBuffers;

@end
