/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface HUQuickControlButtonRowView : UIView

{
    long long _preferredContentAlignment;
    NSMutableArray *_mutableButtonViews;
    NSArray *_buttonConstraints;
    UIScrollView *_scrollView;
}

@property (retain, nonatomic) NSMutableArray *mutableButtonViews;
@property (retain, nonatomic) NSArray *buttonConstraints;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long preferredContentAlignment;
@property (copy, nonatomic, readonly) NSArray *buttonViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasCenteredContent;

+ (_Bool)requiresConstraintBasedLayout;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)contentDidChange;
- (void)_contentSizeCategoryDidChange;
- (void)_clearButtonConstraints;
- (void)addButtonView:(id)arg1;
- (void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateLayoutIfNecessary;
- (id)initWithButtonViews:(id)arg1;
- (void)removeButtonView:(id)arg1;

@end
