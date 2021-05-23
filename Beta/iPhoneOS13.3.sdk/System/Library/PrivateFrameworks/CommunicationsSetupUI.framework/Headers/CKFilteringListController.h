/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSListController.h>

@class CKNSExtension, NSArray, NSDictionary, NSMutableArray, NSString, PSSpecifier;

@interface CKFilteringListController : PSListController

{
    _Bool _showingParentViewController;
    _Bool _addCheckmark;
    NSArray *_extensionIDArray;
    NSDictionary *_extensionNameMapping;
    long long _spamFilterState;
    id _beginMappingID;
    CKNSExtension *_ckExtension;
    NSString *_currentExtensionID;
    PSSpecifier *_selectedSpecifier;
    NSMutableArray *_specifierListArray;
}

@property (nonatomic) _Bool addCheckmark;
@property (retain, nonatomic) id beginMappingID;
@property (retain, nonatomic) CKNSExtension *ckExtension;
@property (retain, nonatomic) NSString *currentExtensionID;
@property (retain, nonatomic) PSSpecifier *selectedSpecifier;
@property (retain, nonatomic) NSMutableArray *specifierListArray;
@property (retain, nonatomic) NSArray *extensionIDArray;
@property (retain, nonatomic) NSDictionary *extensionNameMapping;
@property (nonatomic) _Bool showingParentViewController;
@property (nonatomic) long long spamFilterState;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)_syncManager;
- (void)endMatchingExtensions;
- (void)setIsSpamFilteringDefaultEnabled;
- (void)findSpamExtensions;
- (void)showPrivacyAccessWarning:(id)arg1 isToggle:(_Bool)arg2;
- (void)disableSpamFiltering;
- (unsigned char)enableSpamForExtensionID:(id)arg1 withName:(id)arg2;
- (void)enableSpamFiltering:(id)arg1;
- (_Bool)verifyCurrentExtensionIDValidity;
- (id)getDefaultExtension;
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1;
- (id)getExtensionNameAndWarning:(id)arg1;
- (void)tappedSpamAppCell:(id)arg1;
- (void)setSpamFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (id)isSpamFilteringEnabled:(id)arg1;
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (id)isConversationListFilteringEnabled:(id)arg1;
- (id)getSpamSpecifiers;
- (void)showPrivacyLegalVC;

@end
