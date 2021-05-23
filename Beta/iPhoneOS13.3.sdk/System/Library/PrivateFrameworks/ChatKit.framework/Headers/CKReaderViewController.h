/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class NSAttributedString, NSString, UITextView;

@protocol CKReaderViewControllerDelegate;

@interface CKReaderViewController : UIViewController

{
    id <CKReaderViewControllerDelegate> _delegate;
    NSString *_messageGUID;
    UITextView *_textView;
}

@property (retain, nonatomic) UITextView *textView;
@property (weak, nonatomic) id <CKReaderViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *messageGUID;
@property (copy, nonatomic) NSAttributedString *text;
@property (nonatomic) struct _NSRange visibleRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)readerViewControllerForChatItem:(id)arg1;
+ (id)readerScrollPositionCache;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)contentSizeCategoryDidChange:(id)arg1;

@end
