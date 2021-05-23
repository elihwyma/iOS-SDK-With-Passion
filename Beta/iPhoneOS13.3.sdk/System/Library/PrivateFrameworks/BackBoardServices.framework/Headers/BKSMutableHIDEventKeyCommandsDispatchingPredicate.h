/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventKeyCommandsDispatchingPredicate.h>

@class NSSet;

@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate

@property (copy, nonatomic) NSSet *senderDescriptors;
@property (copy, nonatomic) NSSet *displays;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
