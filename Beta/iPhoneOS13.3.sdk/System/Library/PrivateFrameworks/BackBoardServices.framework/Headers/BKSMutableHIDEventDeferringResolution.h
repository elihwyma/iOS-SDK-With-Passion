/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventDeferringResolution.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic) int pid;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
