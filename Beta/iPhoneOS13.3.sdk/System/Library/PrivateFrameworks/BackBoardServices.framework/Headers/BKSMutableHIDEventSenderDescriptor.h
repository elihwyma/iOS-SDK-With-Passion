/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventSenderDescriptor.h>

@class BKSHIDEventDisplay;

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (nonatomic) long long hardwareType;
@property (copy, nonatomic) BKSHIDEventDisplay *associatedDisplay;
@property (nonatomic, getter=isAuthenticated) _Bool authenticated;

+ (id)new;

- (id)init;
- (void)setPrimaryPage:(unsigned int)arg1 primaryUsage:(unsigned int)arg2;

@end
