/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBAccessibilityDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) _Bool allowReachability;
@property (nonatomic, readonly) _Bool reallyDisableReachability;

- (void)_bindAndRegisterDefaults;

@end
