/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface _SBModifierTimelineTextViewController : UIViewController

{
    UITextView *_textView;
    NSString *_text;
}

@property (retain, nonatomic) NSString *text;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
