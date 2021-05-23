/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptNavigationController, SUScriptNavigationItem, SUScriptPopOver, SUScriptSection, SUScriptSplitViewController, UIViewController;

@interface SUScriptViewController : SUScriptObject

{
    NSArray *_scriptToolbarItems;
}

@property (readonly) SUScriptViewController *volumeViewController;
@property (retain, nonatomic) UIViewController *nativeViewController;
@property (retain) id backgroundColor;
@property (readonly) NSString *contextDictionary;
@property (retain) SUScriptViewController *inputAccessoryViewController;
@property (retain) NSString *modalPresentationStyle;
@property (readonly) SUScriptViewController *modalViewController;
@property (readonly) SUScriptNavigationController *navigationController;
@property (readonly) SUScriptNavigationItem *navigationItem;
@property (readonly) SUScriptPopOver *popOver;
@property (readonly) SUScriptViewController *presentingViewController;
@property (retain) SUScriptSection *section;
@property id showsLibraryButton;
@property (readonly) SUScriptSplitViewController *splitViewController;
@property (copy) id toolbarItems;
@property (retain) id topBackgroundColor;
@property (retain) SUScriptViewController *transientViewController;
@property id usesBlurredBackground;
@property id wantsFullScreenLayout;
@property (readonly) NSString *modalPresentationStyleNameFormSheet;
@property (readonly) NSString *modalPresentationStyleNameFullScreen;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)dismissModalViewControllerWithTransition:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (void)tearDownUserInterface;
- (_Bool)equals:(id)arg1;
- (id)newNativeViewController;
- (void)_dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)_dismissModalViewControllerWithTransition:(id)arg1;
- (void)_presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (id)newScriptColorWithValue:(id)arg1;
- (int)_transitionForString:(id)arg1;
- (void)addPassbookPassWithURL:(id)arg1;
- (void)dismissVolumeViewControllerAnimated:(id)arg1;
- (void)presentVolumeViewController:(id)arg1 animated:(id)arg2;
- (id)_parentViewControllerForVolumeViewController;

@end
