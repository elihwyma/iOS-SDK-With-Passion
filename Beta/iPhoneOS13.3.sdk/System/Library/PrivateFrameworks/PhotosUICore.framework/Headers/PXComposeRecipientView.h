/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFont;

@protocol PXComposeRecipientViewDelegate;

@interface PXComposeRecipientView : UIView

{
    struct {
        _Bool textDidChange;
        _Bool didFinishEnteringAddress;
        _Bool requestAddRecipient;
        _Bool didFinishPickingRecipient;
        _Bool didAddRecipient;
        _Bool didRemoveRecipient;
        _Bool didChangeSize;
    } _delegateRespondsTo;
    _Bool _separatorHidden;
    id <PXComposeRecipientViewDelegate> _delegate;
    UIFont *_baseFont;
    NSString *_text;
    NSString *_label;
    UIButton *_addButton;
    long long _maxRecipients;
    NSArray *_recipients;
}

@property (weak, nonatomic) id <PXComposeRecipientViewDelegate> delegate;
@property (nonatomic, readonly) UIFont *baseFont;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic) long long maxRecipients;
@property (nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
@property (copy, nonatomic, readonly) NSArray *recipients;

- (id)init;
- (void)addRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)removeRecipients:(id)arg1;

@end
