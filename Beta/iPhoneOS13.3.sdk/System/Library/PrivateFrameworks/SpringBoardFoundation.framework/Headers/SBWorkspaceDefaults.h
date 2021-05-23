/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly, getter=isMedusaEnabled) _Bool medusaEnabled;
@property (nonatomic, readonly) long long medusaDeviceSimulation;
@property (nonatomic, readonly, getter=isBreadcrumbDisabled) _Bool breadcrumbDisabled;

- (void)_bindAndRegisterDefaults;

@end
