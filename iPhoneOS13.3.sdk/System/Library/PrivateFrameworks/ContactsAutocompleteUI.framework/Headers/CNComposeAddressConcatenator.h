//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNComposeAddressConcatenator : NSObject
{
    NSString *_andNMoreFormat;
    NSString *_andNMoreNoEllipsisFormat;
    NSString *_nAddressesFormat;
    NSString *_truncatedAddressFormat;
}

+ (id)defaultRecipientListConcatenator;
@property(retain, nonatomic) NSString *truncatedAddressFormat; // @synthesize truncatedAddressFormat=_truncatedAddressFormat;
@property(retain, nonatomic) NSString *nAddressesFormat; // @synthesize nAddressesFormat=_nAddressesFormat;
@property(retain, nonatomic) NSString *andNMoreNoEllipsisFormat; // @synthesize andNMoreNoEllipsisFormat=_andNMoreNoEllipsisFormat;
@property(retain, nonatomic) NSString *andNMoreFormat; // @synthesize andNMoreFormat=_andNMoreFormat;
// - (void).cxx_destruct;
- (id)commaSeparatedAddressListWithAddressCount:(NSUInteger)arg1 prefixForAddressAtIndex:(id /* CDUnknownBlockType */)arg2 stringForAddressAtIndex:(id /* CDUnknownBlockType */)arg3 lengthValidationBlock:(id /* CDUnknownBlockType */)arg4;
- (void)getCommaSeparatedAddressList:(out id )arg1 andListSuffix:(out id )arg2 withAddressCount:(NSUInteger)arg3 prefixForAddressAtIndex:(id /* CDUnknownBlockType */)arg4 stringForAddressAtIndex:(id /* CDUnknownBlockType */)arg5 lengthValidationBlock:(id /* CDUnknownBlockType */)arg6;

@end

