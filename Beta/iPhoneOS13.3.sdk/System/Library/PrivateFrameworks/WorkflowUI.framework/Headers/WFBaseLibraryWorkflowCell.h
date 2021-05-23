/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFBaseCollectionViewCell.h>

#import <WorkflowUI/Swift-Protocol.h>

@class CALayer, NSString, UIView, UIViewController, WFFloatingView, WFLibraryCancelButton, WFWorkflowIcon, WFWorkflowReference;

@protocol WFBaseLibraryWorkflowCellDelegate, WFBaseLibraryWorkflowCellMetrics;

@interface WFBaseLibraryWorkflowCell : WFBaseCollectionViewCell <Swift>

{
    _Bool _progressing;
    id <WFBaseLibraryWorkflowCellDelegate> _delegate;
    id <WFBaseLibraryWorkflowCellMetrics> _layoutMetrics;
    WFWorkflowReference *_workflowReference;
    NSString *_workflowName;
    NSString *_workflowDescription;
    NSString *_workflowAssociatedAppBundleIdentifier;
    WFWorkflowIcon *_workflowIcon;
    double _progress;
    WFLibraryCancelButton *_cancelButton;
    WFFloatingView *_floatingView;
    CALayer *_iconLayer;
    UIView *_maskedBackgroundView;
    CALayer *_backgroundLayer;
}

@property (nonatomic, readonly) UIView *editButton;
@property (weak, nonatomic, readonly) WFLibraryCancelButton *cancelButton;
@property (nonatomic, readonly) WFFloatingView *floatingView;
@property (nonatomic, readonly) CALayer *iconLayer;
@property (nonatomic, readonly) UIView *maskedBackgroundView;
@property (nonatomic, readonly) CALayer *backgroundLayer;
@property (weak, nonatomic) id <WFBaseLibraryWorkflowCellDelegate> delegate;
@property (copy, nonatomic) id <WFBaseLibraryWorkflowCellMetrics> layoutMetrics;
@property (copy, nonatomic) WFWorkflowReference *workflowReference;
@property (copy, nonatomic) NSString *workflowName;
@property (copy, nonatomic) NSString *workflowDescription;
@property (copy, nonatomic) NSString *workflowAssociatedAppBundleIdentifier;
@property (copy, nonatomic) WFWorkflowIcon *workflowIcon;
@property (nonatomic, getter=isProgressing) _Bool progressing;
@property (nonatomic, readonly) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIView *view;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)cancelButtonPressed:(id)arg1;
- (void)presentAlert:(id)arg1;
- (void)updateIconImage;

@end
