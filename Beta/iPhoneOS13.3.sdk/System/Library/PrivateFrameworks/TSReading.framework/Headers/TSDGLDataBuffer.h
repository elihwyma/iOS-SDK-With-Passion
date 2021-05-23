/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TSDGLDataBuffer : NSObject

{
    unsigned long long mCurrentBufferIndex;
    NSMutableArray *mArrayBuffers;
    NSMutableDictionary *mAttributeToArrayBuffersDictionary;
    unsigned long long mElementArrayCount;
    unsigned short *mGLElementData;
    _Bool mGLElementDataBufferWasSetup;
    unsigned int mGLElementDataBuffer;
    struct CGSize mGLElementMeshSize;
    unsigned long long mGLElementQuadParticleCount;
    unsigned int mGLVertexArrayObjects[2];
    _Bool _isUpdatingRawDataBuffer;
    _Bool _didTeardown;
    _Bool _isDoubleBuffered;
    unsigned int _drawMode;
    unsigned long long _vertexCount;
    NSArray *_vertexAttributes;
}

@property (readonly) unsigned long long vertexCount;
@property (readonly) NSArray *vertexAttributes;
@property (nonatomic) unsigned int drawMode;
@property (readonly) _Bool isDoubleBuffered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)teardown;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_f2e236b6)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint4D:(CDStruct_f2e236b6)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(_Bool)arg4;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange)arg2;
- (void)enableElementArrayBuffer;
- (_Bool)p_setAttributeUpdateData:(CDStruct_64113493 *)arg1 fromAttribute:(id)arg2;
- (id)initWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (void)disableElementArrayBuffer;
- (void)drawWithShader:(id)arg1;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (id)vertexAttributeNamed:(id)arg1;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
