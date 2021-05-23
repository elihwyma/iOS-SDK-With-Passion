/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@interface SRSensorWriterWrapper : NSObject

+ (id)writerInstance;

- (_Bool)isReady;
- (void)write:(id)arg1;
- (void)writeSessionSamples:(id)arg1;

@end
