/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIAccessibilityCustomAction.h>

@class NSString, UIImage;

@interface UIAccessibilityCustomAction (Private)

@property (retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, getter=_shortName, setter=_setShortName:) NSString *shortName;
@property (nonatomic) _Bool shouldSuppressActionHint;
@property (retain, nonatomic, getter=_accessibilityInternalCustomActionIdentifier, setter=_accessibilitySetInternalCustomActionIdentifier:) NSString *internalCustomActionIdentifier;
@property (nonatomic) _Bool ignoreWhenVoiceOverTouches;
@property (retain, nonatomic) NSString *localizedActionRotorCategory;
@property (nonatomic) unsigned long long sortPriority;

- (id)_accessibilityAXAttributedName;
- (id)_accessibilityCustomActionIdentifier;
- (_Bool)_accessibilityMatchesCustomActionIdentifier:(id)arg1;

@end
