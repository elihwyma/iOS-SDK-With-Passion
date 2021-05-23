/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventDeferringPredicate.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate

@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
