/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@class NSArray;

@interface SBExternalDuetDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) NSArray *duetWhitelistedApps;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
