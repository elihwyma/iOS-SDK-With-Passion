//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding>
{
    NSData *_platformData;
    NSData *_platformDataSignature;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *platformDataSignature; // @synthesize platformDataSignature=_platformDataSignature;
@property(copy, nonatomic) NSData *platformData; // @synthesize platformData=_platformData;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

