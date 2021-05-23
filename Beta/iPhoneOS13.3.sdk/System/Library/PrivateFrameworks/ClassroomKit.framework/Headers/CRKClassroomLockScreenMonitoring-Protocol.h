/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@protocol CRKClassroomLockScreenMonitoring <Swift>

@property (nonatomic, readonly, getter=isClassroomLockScreenVisible) _Bool classroomLockScreenVisible;

+ (unsigned short)sharedMonitor;

- (unsigned short)displayClassroomLockScreenWithLabel:passcode: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissClassroomLockScreen;

@end
