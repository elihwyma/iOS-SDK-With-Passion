/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSData;

@protocol SCNGeometryElementJSExport <Swift>

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long primitiveType;
@property (nonatomic, readonly) long long primitiveCount;
@property (nonatomic) struct _NSRange primitiveRange;
@property (nonatomic, readonly) long long indicesChannelCount;
@property (nonatomic, readonly, getter=hasInterleavedIndicesChannels) _Bool interleavedIndicesChannels;
@property (nonatomic, readonly) long long bytesPerIndex;
@property (nonatomic) float pointSize;
@property (nonatomic) float minimumPointScreenSpaceRadius;
@property (nonatomic) float maximumPointScreenSpaceRadius;

+ (unsigned short)geometryElementWithMDLSubmesh: /* Error: Ran out of types for this method. */;
+ (unsigned short)geometryElementWithData:primitiveType:primitiveCount:bytesPerIndex: /* Error: Ran out of types for this method. */;
+ (unsigned short)geometryElementWithData:primitiveType:primitiveCount:indicesChannelCount:interleavedIndicesChannels:bytesPerIndex: /* Error: Ran out of types for this method. */;

@end
