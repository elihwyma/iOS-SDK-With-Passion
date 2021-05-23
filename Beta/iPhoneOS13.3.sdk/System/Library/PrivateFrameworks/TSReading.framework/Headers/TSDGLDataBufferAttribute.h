/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSDGLDataArrayBuffer, TSDGLDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject

{
    _Bool _isNormalized;
    unsigned int _bufferUsage;
    int _componentCount;
    int _locationInShader;
    NSString *_name;
    long long _dataType;
    unsigned long long _bufferOffset;
    TSDGLDataArrayBuffer *_dataArrayBuffer;
    TSDGLDataBuffer *_dataBuffer;
}

@property (nonatomic) int locationInShader;
@property (nonatomic) unsigned long long bufferOffset;
@property (nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer;
@property (nonatomic) TSDGLDataBuffer *dataBuffer;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned int bufferUsage;
@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) int componentCount;
@property (nonatomic, readonly) _Bool isNormalized;

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(long long)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;

- (id)description;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(long long)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;
- (void)setBufferUsage:(unsigned int)arg1;
- (void)setComponentCount:(int)arg1;

@end
