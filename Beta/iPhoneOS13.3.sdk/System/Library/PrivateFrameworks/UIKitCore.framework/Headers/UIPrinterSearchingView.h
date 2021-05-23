/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UIPrintMessageAndSpinnerView;

__attribute__((visibility("hidden")))
@interface UIPrinterSearchingView : UIView

{
    _Bool _constraintsSet;
    _UIPrintMessageAndSpinnerView *_messageAndSpinner;
}

@property (weak, nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateFont;
- (void)searchTimeout;
- (void)setSearching:(_Bool)arg1;

@end
