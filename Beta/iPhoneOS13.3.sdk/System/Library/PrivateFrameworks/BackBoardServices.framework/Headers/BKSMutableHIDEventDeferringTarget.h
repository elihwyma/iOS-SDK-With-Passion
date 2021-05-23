/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventDeferringTarget.h>

@class BKSHIDEventDeferringToken;

@interface BKSMutableHIDEventDeferringTarget : BKSHIDEventDeferringTarget

@property (nonatomic) int pid;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
