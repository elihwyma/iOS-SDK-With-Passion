/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKConversation;

__attribute__((visibility("hidden")))
@interface CKTranscriptHeaderViewController : UIViewController

{
    _Bool _shouldInvalidateOnAddressBookChange;
    CKConversation *_conversation;
}

@property (retain, nonatomic) CKConversation *conversation;
@property (nonatomic, readonly) _Bool shouldInvalidateOnAddressBookChange;

- (id)initWithConversation:(id)arg1;

@end
