/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary, NSString;

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSString *lastSystemBuildVersion;
@property (retain, nonatomic) NSString *lastRestoreIdentifier;
@property (nonatomic) _Bool hasCompletedSynchronizingCloudCriticalData;
@property (nonatomic) NSDictionary *bootTransitionContext;
@property (nonatomic, readonly) _Bool dontLockAfterCrash;
@property (nonatomic, readonly) _Bool recordBootTimeTillDidFinishLaunching;

- (void)_bindAndRegisterDefaults;

@end
