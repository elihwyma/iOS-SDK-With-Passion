/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class QLPreviewController, WFContentCollection, WFNumericPageControl;

@protocol WFModulesQuickLookViewDelegate;

@interface WFModulesQuickLookView : UIView

{
    WFContentCollection *_content;
    id <WFModulesQuickLookViewDelegate> _delegate;
    QLPreviewController *_previewController;
    UIView *_containerView;
    WFNumericPageControl *_pageControl;
    WFContentCollection *_dataSource;
}

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) WFNumericPageControl *pageControl;
@property (retain, nonatomic) WFContentCollection *dataSource;
@property (retain, nonatomic) WFContentCollection *content;
@property (weak, nonatomic) id <WFModulesQuickLookViewDelegate> delegate;
@property (nonatomic, readonly) QLPreviewController *previewController;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)numericPageControl:(id)arg1 changedPageTo:(long long)arg2;
- (void)fullscreenPressed;
- (void)sharePressed:(id)arg1;

@end
