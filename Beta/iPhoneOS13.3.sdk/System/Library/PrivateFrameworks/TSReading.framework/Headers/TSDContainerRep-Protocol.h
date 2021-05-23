/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSObject;

@protocol TSDContainerInfo;

@protocol TSDContainerRep <Swift>

@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;

- (unsigned short)childReps;
- (unsigned short)canSelectChildRep: /* Error: Ran out of types for this method. */;
- (unsigned short)selectChildRep: /* Error: Ran out of types for this method. */;

@end
