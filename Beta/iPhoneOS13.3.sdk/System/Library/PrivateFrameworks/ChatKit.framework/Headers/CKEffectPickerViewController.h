/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKEffectPickerView, NSAttributedString;

@protocol CKEffectPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKEffectPickerViewController : UIViewController

{
    id <CKEffectPickerViewControllerDelegate> _delegate;
    NSAttributedString *_text;
    CKEffectPickerView *_pickerView;
    struct CGPoint _balloonViewOrigin;
    struct CGRect _sendButtonFrame;
}

@property (copy, nonatomic) NSAttributedString *text;
@property (nonatomic) struct CGRect sendButtonFrame;
@property (nonatomic) struct CGPoint balloonViewOrigin;
@property (retain, nonatomic) CKEffectPickerView *pickerView;
@property (nonatomic) id <CKEffectPickerViewControllerDelegate> delegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateColor:(BOOL)arg1;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)presentPicker;
- (id)initWithComposition:(id)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 color:(BOOL)arg4;
- (void)setSemanticContentAttribute:(id)arg1 forceLTR:(_Bool)arg2;
- (void)updateHintTransition:(double)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)effectSelectedWithIdentifier:(id)arg1;
- (void)touchUpInsideCloseButton;
- (void)effectPickerViewDidFinishAnimatingIn:(id)arg1;

@end
