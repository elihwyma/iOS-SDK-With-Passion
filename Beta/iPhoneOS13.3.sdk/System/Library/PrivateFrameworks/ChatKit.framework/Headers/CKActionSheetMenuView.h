/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIInterfaceActionGroupView.h>

@class CKActionSheetMenuTitleView, NSString;

@protocol CKActionSheetMenuViewDelegate;

@interface CKActionSheetMenuView : UIInterfaceActionGroupView

{
    CKActionSheetMenuTitleView *_titleView;
    id <CKActionSheetMenuViewDelegate> _delegate;
}

@property (weak, nonatomic) id <CKActionSheetMenuViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setTitle:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTitleConstraintsForBoundingRect:(struct CGRect)arg1;
- (void)dismissSelf;
- (id)initWithTitle:(id)arg1 interfaceActions:(id)arg2;

@end
