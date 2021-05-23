/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIBarAppearance.h>

@class NSString, UIBarButtonItemAppearance;

@interface UIToolbarAppearance : UIBarAppearance

{
    UIBarButtonItemAppearance *_buttonAppearance;
    UIBarButtonItemAppearance *_doneButtonAppearance;
}

@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance;
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
- (id)_plainButtonAppearanceData;
- (id)_doneButtonAppearanceData;
- (id)_plainButtonAppearance;
- (id)_doneButtonAppearance;
- (void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3;
- (void)_barButtonItemDataChanged:(id)arg1;

@end
