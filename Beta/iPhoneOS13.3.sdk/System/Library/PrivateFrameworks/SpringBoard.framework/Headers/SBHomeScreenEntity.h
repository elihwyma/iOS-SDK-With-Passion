/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceEntity.h>

@interface SBHomeScreenEntity : SBWorkspaceEntity

- (id)init;
- (long long)layoutRole;
- (_Bool)isHomeScreenEntity;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1;
- (long long)_mainDisplayPreferredInterfaceOrientation;

@end
