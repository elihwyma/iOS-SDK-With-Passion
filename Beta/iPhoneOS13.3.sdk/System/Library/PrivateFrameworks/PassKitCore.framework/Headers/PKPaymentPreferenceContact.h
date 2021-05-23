/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentPreference.h>

@class NSOrderedSet, NSString, PKPaymentOptionsRecents;

@interface PKPaymentPreferenceContact : PKPaymentPreference

{
    _Bool _showPhoneticName;
    NSOrderedSet *_contactKeys;
    NSString *_addNewTitle;
    NSString *_addExistingTitle;
    NSString *_editExistingTitle;
    unsigned long long _type;
}

@property (retain, nonatomic) PKPaymentOptionsRecents *paymentOptionsRecents;
@property (copy, nonatomic) NSString *contactKey;
@property (copy, nonatomic) NSOrderedSet *contactKeys;
@property (copy, nonatomic) NSString *addNewTitle;
@property (copy, nonatomic) NSString *addExistingTitle;
@property (copy, nonatomic) NSString *editExistingTitle;
@property (nonatomic) unsigned long long type;
@property (nonatomic) _Bool showPhoneticName;

- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(_Bool)arg4;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (id)errorsForPreference:(id)arg1;
- (_Bool)supportsDeletion;
- (_Bool)preferenceObject:(id)arg1 representsContact:(id)arg2;
- (void)_removeDuplicates;
- (void)mergeRecentsAndMeCard;
- (long long)indexOfContact:(id)arg1;

@end
