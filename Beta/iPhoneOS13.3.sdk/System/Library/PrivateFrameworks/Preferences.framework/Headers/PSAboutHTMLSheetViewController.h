/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3;

- (void)dealloc;
- (void)loadView;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidBecomeVisible;
- (void)donePressed;
- (void)setHTMLContent:(id)arg1 isFragment:(_Bool)arg2;

@end
