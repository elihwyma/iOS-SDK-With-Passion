/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListController.h>

@class NSArray, NSString;

@protocol MCUIInfoListDelegate;

__attribute__((visibility("hidden")))
@interface MCUIInfoListController : PSListController

{
    id <MCUIInfoListDelegate> _delegate;
    NSArray *_info;
    NSString *_navTitle;
    NSString *_continueButtonTitle;
}

@property (copy, nonatomic) NSArray *info;
@property (retain, nonatomic) NSString *navTitle;
@property (weak, nonatomic) id <MCUIInfoListDelegate> delegate;
@property (retain, nonatomic) NSString *continueButtonTitle;

- (void)viewWillAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)_tellDelegateWeWantToContinue:(_Bool)arg1;
- (void)_installButtonClicked;
- (void)_cancelButtonClicked;
- (void)_setupNavBar:(_Bool)arg1;

@end
