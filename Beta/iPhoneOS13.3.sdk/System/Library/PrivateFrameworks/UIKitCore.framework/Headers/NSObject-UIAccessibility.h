/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIBezierPath, UIDescriptionBuilder, _UITraitStorageList;

@interface NSObject (UIAccessibility)

@property (nonatomic) _Bool isAccessibilityElement;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSAttributedString *accessibilityAttributedLabel;
@property (copy, nonatomic) NSString *accessibilityHint;
@property (copy, nonatomic) NSAttributedString *accessibilityAttributedHint;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (copy, nonatomic) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) struct CGRect accessibilityFrame;
@property (copy, nonatomic) UIBezierPath *accessibilityPath;
@property (nonatomic) struct CGPoint accessibilityActivationPoint;
@property (retain, nonatomic) NSString *accessibilityLanguage;
@property (nonatomic) _Bool accessibilityElementsHidden;
@property (nonatomic) _Bool accessibilityViewIsModal;
@property (nonatomic) _Bool shouldGroupAccessibilityChildren;
@property (nonatomic) long long accessibilityNavigationStyle;
@property (nonatomic) _Bool accessibilityRespondsToUserInteraction;
@property (retain, nonatomic) NSArray *accessibilityUserInputLabels;
@property (copy, nonatomic) NSArray *accessibilityAttributedUserInputLabels;
@property (copy, nonatomic) NSArray *accessibilityHeaderElements;
@property (retain, nonatomic) NSString *accessibilityTextualContext;
@property (retain, nonatomic) NSArray *accessibilityCustomActions;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) NSString *accessibilityLocalizedStringKey;
@property (retain, nonatomic) NSArray *accessibilityElements;
@property (nonatomic) long long accessibilityContainerType;
@property (retain, nonatomic) NSArray *accessibilityCustomRotors;
@property (retain, getter=_traitStorageList, setter=_setTraitStorageList:) _UITraitStorageList *traitStorageList;
@property (nonatomic, readonly) UIDescriptionBuilder *_ui_descriptionBuilder;

+ (_Bool)__accessibilityGuidedAccessStateEnabled;
+ (long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1;
+ (void)__accessibilityRequestGuidedAccessSession:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_installAppearanceSwizzlesForSetter:(id)arg1;

- (id)className;
- (id)_internalAccessibilityAttributedLabel;
- (id)_internalAccessibilityAttributedValue;
- (id)_internalAccessibilityAttributedHint;
- (id)storedAccessibilityViewIsModal;
- (id)storedAccessibilityElementsHidden;
- (id)storedShouldGroupAccessibilityChildren;
- (id)storedAccessibilityNavigationStyle;
- (id)storedAccessibilityRespondsToUserInteraction;
- (id)_internalAccessibilityAttributedUserInputLabels;
- (void)_internalSetAccessibilityAttributedLabel:(id)arg1;
- (void)_internalSetAccessibilityAttributedValue:(id)arg1;
- (void)_internalSetAccessibilityAttributedHint:(id)arg1;
- (void)_internalSetAccessibilityAttributedUserInputLabels:(id)arg1;
- (id)accessibilityContainer;
- (id)storedAccessibilityTraits;
- (id)storedIsAccessibilityElement;
- (id)storedAccessibilityFrame;
- (id)storedAccessibilityActivationPoint;
- (void)setAccessibilityContainer:(id)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (_Bool)accessibilityElementIsFocused;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityActivate;
- (id)accessibilityIdentification;
- (void)accessibilitySetIdentification:(id)arg1;
- (void)_accessibilityFinalize;
- (unsigned long long)defaultAccessibilityTraits;
- (_Bool)isAccessibilityElementByDefault;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (struct __IOHIDEvent *)_keyboardActivateEventDown:(_Bool)arg1;
- (unsigned int)_accessibilityGetContextID;
- (void)_keyboardActivate;
- (void)setAccessibilityDragSourceDescriptors:(id)arg1;
- (id)accessibilityDragSourceDescriptors;
- (void)setAccessibilityDropPointDescriptors:(id)arg1;
- (id)accessibilityDropPointDescriptors;
- (id)storedAccessibilityContainerType;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)awakeFromNib;
- (void)_applyTraitStorageRecordsForTraitCollection:(id)arg1;
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id *)arg2;
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id *)arg2;
- (_Bool)__isKindOfUIView;
- (id)uiPresentationManager;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (void)prepareForInterfaceBuilder;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_uikit_valueForTraitCollection:(id)arg1;
- (_Bool)_uikit_variesByTraitCollections;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (id)__ivarDescriptionForClass:(Class)arg1;
- (id)__propertyDescriptionForClass:(Class)arg1;
- (id)__methodDescriptionForClass:(Class)arg1;
- (id)_ivarDescription;
- (id)_propertyDescription;
- (id)_methodDescription;
- (id)_shortMethodDescription;

@end
