/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CNErrorViewController : UIViewController <Swift>

{
    NSString *_errorMessage;
    UILabel *_label;
}

@property (copy, nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithMessage:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;

@end
