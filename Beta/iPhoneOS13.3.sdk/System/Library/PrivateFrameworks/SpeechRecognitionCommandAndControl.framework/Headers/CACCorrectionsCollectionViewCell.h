/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface CACCorrectionsCollectionViewCell : UICollectionViewCell

{
    UILabel *_textLabel;
    NSLayoutConstraint *_widthConstraint;
}

@property (nonatomic, readonly) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;

@end
