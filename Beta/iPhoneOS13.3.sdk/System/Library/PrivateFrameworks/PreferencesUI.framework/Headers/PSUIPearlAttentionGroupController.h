/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <Foundation/NSObject.h>

@class BKDevicePearl, BKUserProtectedConfiguration, NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUIPearlAttentionGroupController : NSObject

{
    NSString *_pinCode;
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    BKDevicePearl *_pearlDevice;
    BKUserProtectedConfiguration *_updatedConfiguration;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) BKDevicePearl *pearlDevice;
@property (retain, nonatomic) BKUserProtectedConfiguration *updatedConfiguration;
@property (retain, nonatomic) NSString *pinCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)_pearlDevice;
- (void)setPearlUnlock:(id)arg1 specifier:(id)arg2;
- (id)pearlUnlock:(id)arg1;
- (void)setAttentionAware:(id)arg1 specifier:(id)arg2;
- (id)attentionAware:(id)arg1;
- (void)setProtectedCredentialsWithPasscode:(id)arg1;

@end
