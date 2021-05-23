/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, WFImportQuestionViewController;

@protocol WFGalleryImportQuestionViewDelegate;

@interface WFGalleryImportQuestionView : UIView

{
    id <WFGalleryImportQuestionViewDelegate> _delegate;
    WFImportQuestionViewController *_importQuestionViewController;
    struct CGSize _contentSize;
}

@property (retain, nonatomic) WFImportQuestionViewController *importQuestionViewController;
@property (nonatomic) struct CGSize contentSize;
@property (weak, nonatomic) id <WFGalleryImportQuestionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (void)importQuestionViewController:(id)arg1 didChangeContentSize:(struct CGSize)arg2;
- (id)initWithImportQuestion:(id)arg1 presenter:(id)arg2;

@end
