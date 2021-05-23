/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBBiometricMonitorDataSource <Swift>

@property (nonatomic, readonly) _Bool presenceDetectRunning;
@property (nonatomic, readonly) _Bool matchRunning;
@property (nonatomic, readonly) _Bool poseIsMarginal;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;

@end
