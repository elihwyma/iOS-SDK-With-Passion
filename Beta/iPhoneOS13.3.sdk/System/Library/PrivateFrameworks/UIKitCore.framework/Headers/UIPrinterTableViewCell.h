/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class NSString, PKPrinter, UIGestureRecognizer, UIPrinterAccessoryView;

__attribute__((visibility("hidden")))
@interface UIPrinterTableViewCell : UITableViewCell

{
    PKPrinter *_printer;
    id _delegate;
    UIPrinterAccessoryView *_printerAccessoryView;
    UIGestureRecognizer *_expandedAccessoryTapRecognizer;
}

@property (nonatomic) int printerState;
@property (weak, nonatomic) PKPrinter *printer;
@property (weak, nonatomic) id delegate;
@property (nonatomic) _Bool checked;
@property (retain, nonatomic) UIPrinterAccessoryView *printerAccessoryView;
@property (retain, nonatomic) UIGestureRecognizer *expandedAccessoryTapRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)printerAccessoryViewInfoButtonPressed:(id)arg1;
- (void)expandedAccessoryAreaTapped;

@end
