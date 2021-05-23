/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSSpecifier.h>

@class CNFRegAlias, IMAccount;

@interface PSSpecifier (CNFRegSettings)

@property (retain, nonatomic) CNFRegAlias *CNFRegAlias;
@property (retain, nonatomic) CNFRegAlias *CNFRegCallerIdAlias;
@property (retain, nonatomic) IMAccount *CNFRegAccount;

@end
