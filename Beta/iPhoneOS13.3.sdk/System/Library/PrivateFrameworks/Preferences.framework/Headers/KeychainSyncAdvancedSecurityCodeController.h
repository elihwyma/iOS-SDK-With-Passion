/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController

{
    double _cellTextWidth;
    UIFont *_cellFont;
    _Bool _showsDisableRecoveryOption;
}

@property (nonatomic) _Bool showsDisableRecoveryOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)specifiers;
- (void)nextPressed;
- (void)_finishedWithSpecifier:(id)arg1;

@end
