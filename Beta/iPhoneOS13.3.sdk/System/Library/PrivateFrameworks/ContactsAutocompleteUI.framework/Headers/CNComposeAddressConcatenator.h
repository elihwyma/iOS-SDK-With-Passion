/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNComposeAddressConcatenator : NSObject

{
    NSString *_andNMoreFormat;
    NSString *_andNMoreNoEllipsisFormat;
    NSString *_nAddressesFormat;
    NSString *_truncatedAddressFormat;
}

@property (retain, nonatomic) NSString *andNMoreFormat;
@property (retain, nonatomic) NSString *andNMoreNoEllipsisFormat;
@property (retain, nonatomic) NSString *nAddressesFormat;
@property (retain, nonatomic) NSString *truncatedAddressFormat;

+ (id)defaultRecipientListConcatenator;

- (void)getCommaSeparatedAddressList:(out id *)arg1 andListSuffix:(out id *)arg2 withAddressCount:(unsigned long long)arg3 prefixForAddressAtIndex:(CDUnknownBlockType)arg4 stringForAddressAtIndex:(CDUnknownBlockType)arg5 lengthValidationBlock:(CDUnknownBlockType)arg6;
- (id)commaSeparatedAddressListWithAddressCount:(unsigned long long)arg1 prefixForAddressAtIndex:(CDUnknownBlockType)arg2 stringForAddressAtIndex:(CDUnknownBlockType)arg3 lengthValidationBlock:(CDUnknownBlockType)arg4;

@end
