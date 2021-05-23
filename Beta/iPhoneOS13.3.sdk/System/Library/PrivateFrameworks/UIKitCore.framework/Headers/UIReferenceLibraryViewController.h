/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UINavigationController, UITableViewController;

@interface UIReferenceLibraryViewController : UIViewController <Swift>

{
    NSString *_term;
    NSArray *_definitionValues;
    UINavigationController *_baseNavController;
    UITableViewController *_multiDefViewController;
    UIViewController *_longDefViewController;
    long long _oldPopoverStyle;
    _Bool _enableRotation;
    _Bool _previousIgnoreOrientation;
    CDUnknownBlockType _dismissCompletionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_backgroundColor;
+ (id)_colorAttributes;
+ (id)_foregroundColor;
+ (id)_diddlyDoViewLineColor;
+ (id)_defaultButtonImage;
+ (id)_pressedButtonImage;
+ (id)_localizedDictionaryTitleAttributes;
+ (id)_dictionaryDefinitionAttributes;
+ (_Bool)_shouldShowDefineForTerm:(id)arg1;
+ (_Bool)_shouldShowDefineForTermOfLength:(long long)arg1;
+ (_Bool)dictionaryHasDefinitionForTerm:(id)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_backgroundColor;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_setPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (id)_colorAttributes;
- (void)_dismissModalReferenceView:(id)arg1;
- (void)setEnableRotation:(_Bool)arg1;
- (void)pushDownloadManager:(id)arg1;
- (void)_searchWeb:(id)arg1;
- (void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1;
- (void)_installRequiredElementsOnViewController:(id)arg1;
- (id)_foregroundColor;
- (id)_diddlyDoViewLineColor;
- (id)_defaultButtonImage;
- (id)_pressedButtonImage;
- (id)_localizedDictionaryTitleAttributes;
- (id)_dictionaryDefinitionAttributes;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;
- (id)initWithTerm:(id)arg1;
- (_Bool)enableRotation;

@end
