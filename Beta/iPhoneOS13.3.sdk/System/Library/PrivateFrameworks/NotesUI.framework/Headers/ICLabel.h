/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UILabel.h>

@class NSAttributedString, NSString;

@interface ICLabel : UILabel

{
    NSString *_string;
    NSAttributedString *_attributedString;
    double _spacing;
    double _paragraphSpacing;
    double _lineHeight;
}

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) double spacing;
@property (nonatomic) double paragraphSpacing;
@property (nonatomic) double lineHeight;

- (void)updateText;

@end
