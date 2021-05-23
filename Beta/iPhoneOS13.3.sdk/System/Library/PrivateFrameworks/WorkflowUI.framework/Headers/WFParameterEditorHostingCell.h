/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class CKComponentHostingView, NSString, UIViewController, WFParameterEditorModel;

@protocol WFParameterEditorHostingCellDelegate;

@interface WFParameterEditorHostingCell : UITableViewCell

{
    id <WFParameterEditorHostingCellDelegate> _delegate;
    UIViewController *_containingViewController;
    CKComponentHostingView *_hostingView;
    WFParameterEditorModel *_model;
    double _lastWidth;
}

@property (weak, nonatomic) CKComponentHostingView *hostingView;
@property (retain, nonatomic) WFParameterEditorModel *model;
@property (nonatomic) double lastWidth;
@property (weak, nonatomic) id <WFParameterEditorHostingCellDelegate> delegate;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)component:(id)arg1 updatedParameterState:(id)arg2;

@end
