/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSDGLShader;

@protocol MTLBuffer, MTLDevice;

@interface TSDGPUDataBuffer : NSObject

{
    unsigned long long _currentBufferIndex;
    NSMutableArray *_arrayBuffers;
    NSMutableDictionary *_attributeToArrayBuffersDictionary;
    unsigned long long _elementArrayCount;
    unsigned short *_gLElementData;
    _Bool _gLElementDataBufferWasSetup;
    unsigned int _gLElementDataBuffer;
    id <MTLBuffer> _metalElementData;
    struct CGSize _gLElementMeshSize;
    unsigned long long _gLElementQuadParticleCount;
    _Bool _conformsToMetalProtocol;
    id <MTLDevice> _device;
    unsigned int _gLVertexArrayObjects[2];
    _Bool _isUpdatingRawDataBuffer;
    _Bool _didTeardown;
    _Bool _isEnabled;
    TSDGLShader *_enabledShader;
    _Bool _isDynamicallyBuffered;
    unsigned int _drawMode;
    unsigned long long _vertexCount;
    NSArray *_vertexAttributes;
    unsigned long long _metalDrawMode;
    unsigned long long _positionAttributeIndex;
    unsigned long long _texCoordAttributeIndex;
    unsigned long long _centerAttributeIndex;
}

@property (nonatomic) unsigned long long metalDrawMode;
@property (readonly) unsigned long long positionAttributeIndex;
@property (readonly) unsigned long long texCoordAttributeIndex;
@property (readonly) unsigned long long centerAttributeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long vertexCount;
@property (readonly) NSArray *vertexAttributes;
@property (nonatomic) unsigned int drawMode;
@property (readonly) _Bool isDynamicallyBuffered;

+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 device:(id)arg5;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 device:(id)arg6;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3 device:(id)arg4;

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
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (_Bool)p_setAttributeUpdateData:(CDStruct_64113493 *)arg1 fromAttribute:(id)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (void)drawWithShader:(id)arg1;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (id)vertexAttributeNamed:(id)arg1;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)p_setupElementArrayBufferIfNecessary;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
- (void)enableGLElementArrayBuffer;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(_Bool)arg2 advanceDynamicBuffer:(_Bool)arg3;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(_Bool)arg3 advanceDynamicBuffer:(_Bool)arg4;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3 advanceDynamicBuffer:(_Bool)arg4;
- (void)enableDataBuffer;
- (void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2 bufferCount:(unsigned long long)arg3;
- (void)disableWithDevice:(id)arg1;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(_Bool)arg3;
- (void)updateDataBufferAttributesWithBlock:(CDUnknownBlockType)arg1;
- (void)disableGLElementArrayBuffer;
- (void)drawWithShader:(id)arg1 advanceDynamicBuffer:(_Bool)arg2;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(_Bool)arg2;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(_Bool)arg3;

@end
