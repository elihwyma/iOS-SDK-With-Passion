/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <ModelIO/MDLSubmesh.h>

@interface MDLSubmesh (SCNModelIO)

+ (id)submeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 positionSourceChannel:(unsigned long long)arg3;
+ (id)submeshWithUniquedIndexData:(id)arg1 andSCNGeometryElement:(id)arg2 bufferAllocator:(id)arg3;
+ (id)newSubmeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2;
+ (id)newSubmeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 positionSourceChannel:(unsigned long long)arg3;
+ (id)newSubmeshWithUniquedIndexData:(id)arg1 andSCNGeometryElement:(id)arg2 bufferAllocator:(id)arg3;
+ (id)newSubmeshWithGeometryData:(id)arg1 indexBufferLength:(unsigned long long)arg2 interleaved:(_Bool)arg3 channelCount:(unsigned long long)arg4 channelIdx:(unsigned long long)arg5 bytesPerIndex:(unsigned long long)arg6 indexType:(unsigned long long)arg7 geometryType:(long long)arg8 allocator:(id)arg9 indexCount:(unsigned long long)arg10 topology:(id)arg11;
+ (id)submeshWithSCNGeometryElement:(id)arg1;
+ (id)submeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2;

@end
