/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class IKDOMElement, IKViewElementStyle, NSString, SKUIBuyButtonDescriptor, SKUIImageViewElement, SKUIStoreIdentifier, SKUIViewElementText;

@interface SKUIButtonViewElement : SKUIViewElement

{
    NSString *_badgeResourceName;
    _Bool _bigHitButton;
    double _bigHitSize;
    SKUIViewElementText *_buttonText;
    long long _buttonViewType;
    NSString *_bundleIdentifier;
    SKUIBuyButtonDescriptor *_buyButtonDescriptor;
    NSString *_confirmationText;
    long long _dataPlaybackId;
    _Bool _disabledButSelectable;
    BOOL _enabled;
    long long _itemIdentifier;
    NSString *_nonToggledText;
    _Bool _selected;
    _Bool _showOnDemand;
    SKUIStoreIdentifier *_storeIdentifier;
    _Bool _toggled;
    NSString *_toggledText;
    NSString *_toggleItemIdentfier;
    NSString *_variantIdentifier;
    IKDOMElement *_xml;
    _Bool _autoIncrementCount;
    _Bool _suppressCloudRestore;
    long long _buttonViewSubType;
    NSString *_playItemIdentifier;
    NSString *_sizeVariant;
    NSString *_toggleItemIdentifier;
}

@property (retain, nonatomic) SKUIBuyButtonDescriptor *buyButtonDescriptor;
@property (nonatomic, readonly) _Bool autoIncrementCount;
@property (nonatomic, readonly, getter=isBigHitButton) _Bool bigHitButton;
@property (nonatomic, readonly) double bigHitSize;
@property (nonatomic, readonly) long long buttonViewType;
@property (nonatomic, readonly) long long buttonViewSubType;
@property (nonatomic, readonly) SKUIViewElementText *buttonText;
@property (nonatomic, readonly) IKViewElementStyle *buttonTitleStyle;
@property (nonatomic, readonly) NSString *confirmationText;
@property (nonatomic, readonly) NSString *nonToggledText;
@property (nonatomic, readonly) NSString *toggledText;
@property (nonatomic, readonly) NSString *badgeResourceName;
@property (nonatomic, readonly) SKUIImageViewElement *buttonImage;
@property (nonatomic, readonly) SKUIImageViewElement *additionalButtonImage;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long dataPlaybackId;
@property (nonatomic, readonly) NSString *playItemIdentifier;
@property (nonatomic, readonly) NSString *sizeVariant;
@property (nonatomic, readonly) _Bool showOnDemand;
@property (nonatomic, readonly) NSString *toggleItemIdentifier;
@property (nonatomic, readonly) NSString *variantIdentifier;
@property (nonatomic, readonly, getter=isDisabledButSelectable) _Bool disabledButSelectable;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isToggled) _Bool toggled;
@property (nonatomic, readonly) _Bool suppressCloudRestore;

- (void)dealloc;
- (id)description;
- (_Bool)isEnabled;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;
- (id)personalizationLibraryItems;
- (id)_parseButtonText;

@end
