/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKTwoButtonInlineNotificationView, NSString;

@protocol CKUnexpectedlyLoggedOutNotificationViewDelegate;

__attribute__((visibility("hidden")))
@interface CKUnexpectedlyLoggedOutNotificationView : UIView

{
    id <CKUnexpectedlyLoggedOutNotificationViewDelegate> _delegate;
    CKTwoButtonInlineNotificationView *_inlineNotificationView;
}

@property (retain, nonatomic) CKTwoButtonInlineNotificationView *inlineNotificationView;
@property (weak, nonatomic) id <CKUnexpectedlyLoggedOutNotificationViewDelegate> delegate;
@property (nonatomic) _Bool visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2;
- (void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1;
- (void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1;

@end
