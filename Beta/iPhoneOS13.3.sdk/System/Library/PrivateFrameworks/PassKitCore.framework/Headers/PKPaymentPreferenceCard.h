/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentPreference.h>

@interface PKPaymentPreferenceCard : PKPaymentPreference

{
    _Bool _supportsNullSelection;
}

@property (nonatomic) _Bool supportsNullSelection;

- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(_Bool)arg4;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (id)errorsForPreference:(id)arg1;
- (_Bool)supportsDeletion;

@end
