/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class KeychainSyncCountryInfo, NSArray, NSString, PSEditableTableCell, PSListController, PSPhoneNumberSpecifier, PSSpecifier;

@protocol KeychainSyncPhoneSettingsFragmentDelegate;

@interface KeychainSyncPhoneSettingsFragment : NSObject

{
    NSArray *_specifiers;
    PSPhoneNumberSpecifier *_phoneNumberSpecifier;
    PSSpecifier *_countrySpecifier;
    PSListController *_listController;
    NSString *_phoneNumber;
    KeychainSyncCountryInfo *_countryInfo;
    id <KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
    NSString *_title;
}

@property (nonatomic, readonly) NSArray *specifiers;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) KeychainSyncCountryInfo *countryInfo;
@property (nonatomic, readonly) PSEditableTableCell *phoneNumberCell;
@property (weak, nonatomic) id <KeychainSyncPhoneSettingsFragmentDelegate> delegate;
@property (retain, nonatomic) NSString *title;

- (void)dealloc;
- (void)resignFirstResponder;
- (void)textFieldChanged:(id)arg1;
- (void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2;
- (id)dialingCountryInfoForSpecifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (id)phoneNumberForSpecifier:(id)arg1;
- (id)unformattedPhoneNumber;
- (id)initWithListController:(id)arg1;
- (void)reloadSpecifiers;

@end
