/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@interface SBExternalWifiDefaults : BSAbstractDefaultDomain

@property (nonatomic) _Bool wifiEnabled;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
