/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface BKSLockdownDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) _Bool tetheredDisplayPortMode;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
