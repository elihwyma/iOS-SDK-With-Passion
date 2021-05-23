/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

@class NSArray, UIStackView;

@protocol GEOTextItemContainer;

__attribute__((visibility("hidden")))
@interface MKTextItemContainerViewController : UIViewController

{
    id <GEOTextItemContainer> _textItemContainer;
    NSArray *_textItemViews;
    UIStackView *_stackView;
    double _maxWidth;
}

@property (nonatomic, readonly) id <GEOTextItemContainer> textItemContainer;
@property (copy, nonatomic) NSArray *textItemViews;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double maxWidth;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (id)initWithTextItemContainer:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)infoCardThemeChanged;
- (void)updateUIForTheme:(id)arg1;
- (double)currentMaxWidth;
- (void)setupSubviewsWithMaxWidth:(double)arg1;

@end
