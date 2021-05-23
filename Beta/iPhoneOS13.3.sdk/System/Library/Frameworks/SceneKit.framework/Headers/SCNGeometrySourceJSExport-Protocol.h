/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSData, NSString;

@protocol SCNGeometrySourceJSExport <Swift>

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *semantic;
@property (nonatomic, readonly) long long vectorCount;
@property (nonatomic, readonly) _Bool floatComponents;
@property (nonatomic, readonly) long long componentsPerVector;
@property (nonatomic, readonly) long long bytesPerComponent;
@property (nonatomic, readonly) long long dataOffset;
@property (nonatomic, readonly) long long dataStride;

+ (unsigned short)geometrySourceWithData:semantic:vectorCount:floatComponents:componentsPerVector:bytesPerComponent:dataOffset:dataStride: /* Error: Ran out of types for this method. */;
+ (unsigned short)geometrySourceWithVertices:count: /* Error: Ran out of types for this method. */;
+ (unsigned short)geometrySourceWithNormals:count: /* Error: Ran out of types for this method. */;
+ (unsigned short)geometrySourceWithTextureCoordinates:count: /* Error: Ran out of types for this method. */;

@end
