/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_semaphore;

@protocol BWNodeBackPressureSource <Swift>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;

@end
