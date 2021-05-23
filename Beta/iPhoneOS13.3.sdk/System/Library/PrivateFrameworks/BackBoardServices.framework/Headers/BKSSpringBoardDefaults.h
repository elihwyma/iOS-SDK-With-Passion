/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface BKSSpringBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic) float brightness;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
