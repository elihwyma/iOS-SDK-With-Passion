//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSData, NSString;

@interface HMFHardwareAddress : HMFObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSString *_formattedString;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToAddress:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *formattedString; // @synthesize formattedString=_formattedString;
@property(readonly) NSUInteger length;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithAddressData:(id)arg1;
- (id)initWithAddressString:(id)arg1 length:(NSUInteger)arg2;

@end

