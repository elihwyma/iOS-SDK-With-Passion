/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UIView.h>

@class NSArray, NUIContainerStackView;

@interface CNModernAtomIconView : UIView

{
    NSArray *_iconImages;
    NUIContainerStackView *_stackView;
    struct CGPoint _drawingOffset;
}

@property (retain, nonatomic) NSArray *iconImages;
@property (retain, nonatomic) NUIContainerStackView *stackView;
@property (nonatomic) double iconPadding;
@property (nonatomic) struct CGPoint drawingOffset;

- (id)initWithFrame:(struct CGRect)arg1;
- (double)preferredWidth;

@end
