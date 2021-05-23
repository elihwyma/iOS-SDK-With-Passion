/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKViewController.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface WDContactConsolidationLearnMoreViewController : HKViewController

{
    UITextView *_textView;
    CDUnknownBlockType _dismissHandler;
}

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dismissButtonPressed:(id)arg1;
- (void)createTextView;
- (void)createDismissButton;

@end
