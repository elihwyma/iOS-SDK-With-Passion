/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNLabeledCell.h>

@class CNPropertyGroupItem, UIResponder;

@protocol CNPresenterDelegate, CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyCell : CNLabeledCell

{
    _Bool _allowsEditing;
    _Bool _ignoreSuggested;
    _Bool _forceSuggested;
    _Bool _highlightedProperty;
    _Bool _important;
    id _property;
    UIResponder *_firstResponderItem;
    double _labelWidth;
    id <CNPropertyCellDelegate> _delegate;
    id <CNPresenterDelegate> _presentingDelegate;
}

@property (weak, nonatomic) id property;
@property (nonatomic, readonly) CNPropertyGroupItem *propertyItem;
@property (nonatomic, readonly) UIResponder *firstResponderItem;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool ignoreSuggested;
@property (nonatomic) _Bool forceSuggested;
@property (nonatomic, readonly, getter=isSuggested) _Bool suggested;
@property (nonatomic, getter=isHighlightedProperty) _Bool highlightedProperty;
@property (nonatomic, getter=isImportant) _Bool important;
@property (nonatomic, readonly) _Bool supportsTintColorValue;
@property (nonatomic, readonly) _Bool supportsValueColorUsesLabelColor;
@property (nonatomic) double labelWidth;
@property (weak, nonatomic) id <CNPropertyCellDelegate> delegate;
@property (weak, nonatomic) id <CNPresenterDelegate> presentingDelegate;

+ (id)labelStringFromAppName:(id)arg1 andPropertyLabel:(id)arg2;

- (id)valueString;
- (void)tintColorDidChange;
- (void)copy:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelString;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (void)performAccessoryAction;
- (void)setPropertyItem:(id)arg1;
- (_Bool)shouldShowSuggestionOrigin;
- (void)updateWithPropertyItem:(id)arg1;
- (void)updateValueWithPropertyItem:(id)arg1;

@end
