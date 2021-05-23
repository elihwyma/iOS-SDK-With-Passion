/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) _Bool forcesMedusaAdoption;
@property (nonatomic, readonly) _Bool ignoresDeclaredNetworkUsage;
@property (nonatomic, readonly) _Bool shouldAllowScreenshotsInLoginWindow;
@property (nonatomic) NSString *bundleIdentifierToForceHomeAffordanceInset;
@property (nonatomic, readonly) _Bool shouldAllowUseOfNonRecapPPT;
@property (nonatomic, readonly) _Bool shouldShowInternalApplications;
@property (nonatomic, readonly) _Bool shouldShowNonDefaultSystemApplications;

- (void)_bindAndRegisterDefaults;

@end
