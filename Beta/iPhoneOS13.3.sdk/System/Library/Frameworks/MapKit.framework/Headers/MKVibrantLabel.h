/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKVibrantView.h>

@class NSAttributedString, NSString, UIColor, UIFont, UILabel;

@interface MKVibrantLabel : MKVibrantView

{
    UILabel *_label;
    UIColor *_textColor;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;

- (id)initWithStyle:(long long)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
