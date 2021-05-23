/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIParticlesStaticBufferFactory : NSObject

+ (id)angularParticleVertexBufferWithDevice:(id)arg1;
+ (id)angularIndexBufferWithDevice:(id)arg1;
+ (id)particleVertexBufferWithDevice:(id)arg1;
+ (id)particleIndexBufferWithDevice:(id)arg1;
+ (float)maximumAngularParticleLength;
+ (id)waveVertexBufferWithDevice:(id)arg1 pointCount:(unsigned int)arg2;
+ (id)waveIndexBufferWithDevice:(id)arg1 pointCount:(unsigned int)arg2;

@end
