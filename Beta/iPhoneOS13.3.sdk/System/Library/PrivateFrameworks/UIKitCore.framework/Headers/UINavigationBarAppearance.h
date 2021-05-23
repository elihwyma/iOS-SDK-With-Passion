/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIBarAppearance.h>

@class NSDictionary, NSString, UIBarButtonItemAppearance, UIImage, _UINavTitleAppearanceData;

@interface UINavigationBarAppearance : UIBarAppearance

{
    _UINavTitleAppearanceData *_barTitleData;
    UIBarButtonItemAppearance *_buttonAppearance;
    UIBarButtonItemAppearance *_doneButtonAppearance;
    UIBarButtonItemAppearance *_backButtonAppearance;
}

@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *backButtonAppearance;
@property (nonatomic, readonly) UIImage *backIndicatorImage;
@property (nonatomic, readonly) UIImage *backIndicatorTransitionMaskImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)_setupDefaults;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (_Bool)_checkEqualTo:(id)arg1;
- (void)_describeInto:(id)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (id)_barTitleData;
- (id)_backButtonAppearanceData;
- (id)_plainButtonAppearanceData;
- (id)_doneButtonAppearanceData;
- (id)_backButtonAppearance;
- (id)_plainButtonAppearance;
- (id)_doneButtonAppearance;
- (void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3;
- (void)_barButtonItemDataChanged:(id)arg1;
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;

@end
