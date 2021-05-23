/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIButton;

@protocol UIPrinterAccessoryViewDelegate;

__attribute__((visibility("hidden")))
@interface UIPrinterAccessoryView : UIView

{
    int _printerState;
    UIButton *_infoButton;
    UIView *_statusView;
    id <UIPrinterAccessoryViewDelegate> _delegate;
}

@property (retain, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) UIView *statusView;
@property (weak, nonatomic) id <UIPrinterAccessoryViewDelegate> delegate;
@property (nonatomic) int printerState;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)infoButtonPressed:(id)arg1;

@end
