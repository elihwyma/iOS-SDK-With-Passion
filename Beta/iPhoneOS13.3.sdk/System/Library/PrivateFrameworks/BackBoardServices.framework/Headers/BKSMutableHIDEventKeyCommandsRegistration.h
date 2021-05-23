/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventKeyCommandsRegistration.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet;

@interface BKSMutableHIDEventKeyCommandsRegistration : BKSHIDEventKeyCommandsRegistration

@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (copy, nonatomic) NSSet *keyCommands;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
