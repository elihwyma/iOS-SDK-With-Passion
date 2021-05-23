/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIInputViewController.h>

@class CKMessageEntryView;

@interface CKMessageEntryViewController : UIInputViewController

{
    _Bool _inputAccessoryViewControllerEnabled;
    CKMessageEntryView *_entryView;
}

@property (nonatomic, readonly) CKMessageEntryView *entryView;
@property (nonatomic) _Bool inputAccessoryViewControllerEnabled;

+ (_Bool)_requiresProxyInterface;

- (void)loadView;
- (id)initWithEntryView:(id)arg1;

@end
