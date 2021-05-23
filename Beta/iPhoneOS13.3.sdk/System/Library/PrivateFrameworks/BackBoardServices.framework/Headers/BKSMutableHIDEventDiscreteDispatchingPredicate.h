/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventDiscreteDispatchingPredicate.h>

@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (copy, nonatomic) NSSet *senderDescriptors;
@property (copy, nonatomic) NSSet *descriptors;
@property (copy, nonatomic) NSSet *displays;

+ (id)new;
+ (id)defaultSystemPredicate;
+ (id)defaultFocusPredicate;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
