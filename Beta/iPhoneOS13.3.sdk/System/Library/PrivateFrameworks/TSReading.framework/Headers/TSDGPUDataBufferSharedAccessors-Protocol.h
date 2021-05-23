/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSArray;

@protocol TSDGPUDataBufferSharedAccessors <Swift>

@property (readonly) unsigned long long vertexCount;
@property (readonly) NSArray *vertexAttributes;
@property (nonatomic) unsigned int drawMode;
@property (readonly) _Bool isDynamicallyBuffered;

@end
