/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) long long lastLockedOrientation;
@property (nonatomic, readonly, getter=isVideoRotationEnabled) _Bool videoRotationEnabled;

- (void)_bindAndRegisterDefaults;

@end
