/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBTestingDefaults : SBAbstractSpringBoardDefaultDomain

@property (copy, nonatomic) NSString *testRunnerRecoveryApplicationBundleIdentifier;

- (void)_bindAndRegisterDefaults;

@end
