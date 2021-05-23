/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSetupDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) _Bool inSetupModeForActivationChange;

- (void)_bindAndRegisterDefaults;

@end
