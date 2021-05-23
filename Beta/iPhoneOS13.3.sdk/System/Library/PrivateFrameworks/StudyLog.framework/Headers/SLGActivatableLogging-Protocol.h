/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <StudyLog/Swift-Protocol.h>

@protocol SLGActivatableLogging <Swift>

@property (copy, nonatomic) CDUnknownBlockType activationHandler;
@property (copy, nonatomic) CDUnknownBlockType deactivationHandler;
@property (nonatomic, getter=isActive) _Bool active;

- (unsigned short)invalidate;

@end
