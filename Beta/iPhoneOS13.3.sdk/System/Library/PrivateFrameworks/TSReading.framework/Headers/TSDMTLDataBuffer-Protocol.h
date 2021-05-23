/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSDMTLDataBuffer <Swift>

@property (nonatomic) unsigned long long metalDrawMode;
@property (readonly) unsigned long long positionAttributeIndex;
@property (readonly) unsigned long long texCoordAttributeIndex;
@property (readonly) unsigned long long centerAttributeIndex;

+ (unsigned short)newDataBufferWithVertexAttributes:vertexCount:indexElementCount:device: /* Error: Ran out of types for this method. */;
+ (unsigned short)newDataBufferWithVertexRect:textureRect:meshSize:device: /* Error: Ran out of types for this method. */;
+ (unsigned short)newDataBufferWithVertexRect:textureRect:meshSize:textureFlipped:device: /* Error: Ran out of types for this method. */;
+ (unsigned short)newDataBufferWithVertexRect:textureRect:meshSize:textureFlipped:includeCenterAttribute:device: /* Error: Ran out of types for this method. */;
+ (unsigned short)newDataBufferWithVertexAttributes:meshSize:device: /* Error: Ran out of types for this method. */;
+ (unsigned short)newDataBufferWithVertexRect:textureRect:device: /* Error: Ran out of types for this method. */;
+ (unsigned short)newDataBufferWithVertexRect:textureRect:textureFlipped:device: /* Error: Ran out of types for this method. */;

- (unsigned short)initWithVertexRect:textureRect:meshSize:textureFlipped:includeCenterAttribute: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithVertexAttributes:vertexCount:indexElementCount:bufferCount: /* Error: Ran out of types for this method. */;
- (unsigned short)drawWithEncoder:atIndex:range:advanceDynamicBuffer: /* Error: Ran out of types for this method. */;
- (unsigned short)enableDataBuffer;
- (unsigned short)encodeWithEncoder:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMetalDataBufferAttributes:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)disableWithDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)drawWithEncoder:atIndex:range: /* Error: Ran out of types for this method. */;
- (unsigned short)drawWithEncoder:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)drawWithEncoder:atIndex:advanceDynamicBuffer: /* Error: Ran out of types for this method. */;
- (unsigned short)updateDataBufferAttributesWithBlock: /* Error: Ran out of types for this method. */;

@end
