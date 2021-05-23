/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class UIFont, UITraitCollection;

@protocol UITraitEnvironment;

@interface VSFontCenter : NSObject

{
    id <UITraitEnvironment> _traitEnvironment;
    UITraitCollection *_traitCollection;
    UIFont *_title0Font;
    UIFont *_title1Font;
    UIFont *_title2Font;
    UIFont *_title3Font;
    UIFont *_headlineFont;
    UIFont *_subheadlineFont;
    UIFont *_bodyFont;
    UIFont *_calloutFont;
    UIFont *_footnoteFont;
    UIFont *_caption1Font;
    UIFont *_caption2Font;
    UIFont *_appAgeRatingFont;
}

@property (copy, nonatomic) UIFont *title0Font;
@property (copy, nonatomic) UIFont *title1Font;
@property (copy, nonatomic) UIFont *title2Font;
@property (copy, nonatomic) UIFont *title3Font;
@property (copy, nonatomic) UIFont *headlineFont;
@property (copy, nonatomic) UIFont *subheadlineFont;
@property (copy, nonatomic) UIFont *bodyFont;
@property (copy, nonatomic) UIFont *calloutFont;
@property (copy, nonatomic) UIFont *footnoteFont;
@property (copy, nonatomic) UIFont *caption1Font;
@property (copy, nonatomic) UIFont *caption2Font;
@property (copy, nonatomic) UIFont *appAgeRatingFont;
@property (weak, nonatomic) id <UITraitEnvironment> traitEnvironment;
@property (copy, nonatomic) UITraitCollection *traitCollection;

- (id)init;
- (void)dealloc;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithTraitEnvironment:(id)arg1;
- (void)_updateFontsWithTraitCollection:(id)arg1;

@end
