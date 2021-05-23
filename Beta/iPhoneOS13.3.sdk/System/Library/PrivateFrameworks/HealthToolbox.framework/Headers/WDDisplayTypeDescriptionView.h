/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UIView.h>

@class HKDisplayType, NSString, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface WDDisplayTypeDescriptionView : UIView

{
    HKDisplayType *_displayType;
    unsigned long long _style;
    UILabel *_descriptionHeadingLabel;
    UILabel *_descriptionLabel;
    UITextView *_attributionTextView;
    UILabel *_cautionaryLabel;
    _Bool _showAttributionText;
}

@property (nonatomic) _Bool showAttributionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)minimumHeightForStyle:(unsigned long long)arg1;
+ (id)_metricsForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextFontForStyle:(unsigned long long)arg1;
+ (id)_attributionTextFontForStyle:(unsigned long long)arg1;
+ (id)_cautionaryTextFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingColorForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextColorForStyle:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_updateFont;
- (void)_setupUI;
- (id)initWithDisplayType:(id)arg1 showAttributionText:(_Bool)arg2 style:(unsigned long long)arg3;

@end
