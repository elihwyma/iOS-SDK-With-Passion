/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, SCRCMathExpression, UIAccessibilityMathWebView;

@interface UIAccessibilityMathViewController : UIViewController

{
    SCRCMathExpression *_mathExpression;
    UIAccessibilityMathWebView *_webView;
    NSDictionary *_mathDictionary;
}

@property (nonatomic, readonly) NSDictionary *mathDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (id)_htmlString;
- (void)_doneButtonTapped;
- (void)_styleBarButtonItem:(id)arg1;
- (id)initWithMathDictionary:(id)arg1;

@end
