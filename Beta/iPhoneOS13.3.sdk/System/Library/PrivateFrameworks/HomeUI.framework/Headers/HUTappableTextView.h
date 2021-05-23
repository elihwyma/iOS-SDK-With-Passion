/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITextView.h>

@class NSString, UITapGestureRecognizer;

@protocol HUTappableTextViewDelegate;

@interface HUTappableTextView : UITextView

{
    id <HUTappableTextViewDelegate> _tappableTextViewDelegate;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (weak, nonatomic) id <HUTappableTextViewDelegate> tappableTextViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_handleTap:(id)arg1;
- (void)configureTapRecognizer;

@end
