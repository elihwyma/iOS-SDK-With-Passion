/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVFocusRedirectView.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductInfoView : _TVFocusRedirectView

{
    NSArray *_viewsAboveInfoSection;
    NSArray *_infoSectionViews;
    NSArray *_viewsBelowInfoSection;
    UIView *_defaultFocusView;
}

@property (retain, nonatomic) NSArray *viewsAboveInfoSection;
@property (retain, nonatomic) NSArray *infoSectionViews;
@property (retain, nonatomic) NSArray *viewsBelowInfoSection;
@property (retain, nonatomic) UIView *defaultFocusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2;

- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)arg1;

@end
