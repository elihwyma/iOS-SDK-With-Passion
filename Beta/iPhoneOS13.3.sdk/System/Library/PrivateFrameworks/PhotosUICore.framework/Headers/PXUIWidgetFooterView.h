/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFocusGuide, UIFont;

@protocol PXUIWidgetFooterViewDelegate;

@interface PXUIWidgetFooterView : UIView

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool hasContent;
        _Bool disclosure;
        _Bool separators;
        _Bool focusGuide;
    } _needsUpdateFlags;
    struct {
        _Bool didSelectDisclosure;
    } _delegateRespondsTo;
    _Bool __hasContent;
    id <PXUIWidgetFooterViewDelegate> _delegate;
    NSString *_disclosureTitle;
    UIFont *_font;
    long long _layoutStyle;
    NSArray *__constraints;
    UIButton *__disclosureButton;
    UIView *__leadingSeparator;
    UIView *__trailingSeparator;
    UIFocusGuide *__focusGuide;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, setter=_setHasContent:) _Bool _hasContent;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic, readonly) UIButton *_disclosureButton;
@property (nonatomic, readonly) UIView *_leadingSeparator;
@property (nonatomic, readonly) UIView *_trailingSeparator;
@property (nonatomic, readonly) UIFocusGuide *_focusGuide;
@property (weak, nonatomic) id <PXUIWidgetFooterViewDelegate> delegate;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets contentInsets;

- (void)updateConstraints;
- (void)tintColorDidChange;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)_disclosureButtonCreateIfNeeded:(_Bool)arg1;
- (id)_leadingSeparatorCreateIfNeeded:(_Bool)arg1;
- (id)_trailingSeparatorCreateIfNeeded:(_Bool)arg1;
- (id)_focusGuideCreateIfNeeded:(_Bool)arg1;
- (void)_handleDisclosureButton:(id)arg1;
- (void)_invalidateHasContent;
- (void)_updateHasContentIfNeeded;
- (void)_invalidateDisclosure;
- (void)_updateDisclosureIfNeeded;
- (void)_invalidateSeparators;
- (void)_updateSeparatorsIfNeeded;
- (void)_invalidateFocusGuide;
- (void)_updateFocusGuideIfNeeded;

@end
