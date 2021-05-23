/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UIView

{
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    unsigned long long _mapType;
    _Bool _useDarkText;
}

@property (nonatomic) unsigned long long mapType;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateTextColor;
- (void)_prepareLabel;
- (id)_attributesWithStroke:(_Bool)arg1;

@end
