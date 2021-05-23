/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol CSLegibilityProviderDelegate;

@protocol CSLegibilityProviding <Swift>

@property (weak, nonatomic) id <CSLegibilityProviderDelegate> legibilityProviderDelegate;

- (unsigned short)currentLegibilitySettings;

@end
