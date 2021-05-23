/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBMultiUserDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) _Bool forceLoginWindow;
@property (nonatomic, readonly) _Bool disablesInternalDebugBlockingTasksUI;

- (void)_bindAndRegisterDefaults;

@end
