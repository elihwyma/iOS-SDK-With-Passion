/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListController.h>

@class MCDetailsDescriptionTableCell, MCDetailsHeaderCell, NSArray, NSDate, NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface MCCertificateSummaryController : PSListController

{
    struct __SecTrust *_trust;
    NSArray *_properties;
    NSString *_displayName;
    NSString *_organizationName;
    NSString *_purpose;
    NSDate *_expiration;
    MCDetailsHeaderCell *_configHeader;
    MCDetailsDescriptionTableCell *_configMiddle;
    UITableViewCell *_configBottom;
    _Bool _backButtonWasHidden;
}

+ (id)_dateFormatter;

- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)actionButtonPressed:(id)arg1;
- (id)_valueAtPath:(id)arg1;
- (void)_setTrust:(struct __SecTrust *)arg1;
- (void)hideActionButton;

@end
