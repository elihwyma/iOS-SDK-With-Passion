/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSPanButton, NSString;

@protocol CPSPanViewDelegate;

@interface CPSPanView : UIView

{
    CPSPanButton *_panLeftButton;
    CPSPanButton *_panRightButton;
    CPSPanButton *_panUpButton;
    CPSPanButton *_panDownButton;
    id <CPSPanViewDelegate> _delegate;
}

@property (nonatomic, readonly) CPSPanButton *panLeftButton;
@property (nonatomic, readonly) CPSPanButton *panRightButton;
@property (nonatomic, readonly) CPSPanButton *panUpButton;
@property (nonatomic, readonly) CPSPanButton *panDownButton;
@property (weak, nonatomic) id <CPSPanViewDelegate> delegate;
@property (nonatomic, readonly) double sideButtonTopInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleButtonTapped:(id)arg1;

@end
