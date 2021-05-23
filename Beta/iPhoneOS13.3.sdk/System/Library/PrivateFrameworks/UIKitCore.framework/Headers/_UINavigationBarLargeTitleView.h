/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSDictionary, NSString, _UINavigationBarLargeTitleViewLayout, _UINavigationBarTransitionContext;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLargeTitleView : UIView

{
    _UINavigationBarTransitionContext *_transitionContext;
    NSArray *_titleCandidates;
    NSString *__effectiveTitle;
    _Bool _providesExtraSpaceForExcessiveLineHeights;
    _Bool _alignAccessoryViewToTitleBaseline;
    NSDictionary *_effectiveTitleAttributes;
    long long _titleType;
    NSString *_title;
    NSArray *_alternateTitles;
    NSDictionary *_titleAttributes;
    unsigned long long _twoLineMode;
    UIView *_accessoryView;
    unsigned long long _accessoryViewHorizontalAlignment;
    _UINavigationBarLargeTitleViewLayout *_layout;
}

@property (nonatomic) long long titleType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *alternateTitles;
@property (copy, nonatomic) NSDictionary *titleAttributes;
@property (nonatomic, readonly) NSDictionary *effectiveTitleAttributes;
@property (nonatomic) unsigned long long twoLineMode;
@property (nonatomic) _Bool providesExtraSpaceForExcessiveLineHeights;
@property (nonatomic, readonly) double restingHeightOfTitleView;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) _Bool alignAccessoryViewToTitleBaseline;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment;
@property (nonatomic, readonly) UIView *accessibilityTitleView;
@property (nonatomic, readonly) _UINavigationBarLargeTitleViewLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_newLayout;
- (void)updateContent;
- (void)recordFromStateForTransition:(id)arg1;
- (void)prepareToRecordToState:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)finalizeStateFromTransition:(id)arg1;
- (void)clearTransitionContext;
- (void)adoptLayout:(id)arg1;
- (void)adoptNewLayout;
- (id)_layoutForMeasurement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 titleType:(long long)arg2;
- (id)_titleForCurrentWidth;
- (void)_updateContentAndInvalidate:(_Bool)arg1;
- (id)_effectiveTitle;

@end
