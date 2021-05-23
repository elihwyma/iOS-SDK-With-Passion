/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

#import <BusinessChatService/Swift-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NBPhoneNumber : NSObject <Swift>

{
    _Bool _italianLeadingZero;
    NSNumber *_countryCode;
    NSNumber *_nationalNumber;
    NSString *_extension;
    NSNumber *_numberOfLeadingZeros;
    NSString *_rawInput;
    NSNumber *_countryCodeSource;
    NSString *_preferredDomesticCarrierCode;
}

@property (retain, nonatomic) NSNumber *countryCode;
@property (retain, nonatomic) NSNumber *nationalNumber;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) _Bool italianLeadingZero;
@property (retain, nonatomic) NSNumber *numberOfLeadingZeros;
@property (retain, nonatomic) NSString *rawInput;
@property (retain, nonatomic) NSNumber *countryCodeSource;
@property (retain, nonatomic) NSString *preferredDomesticCarrierCode;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearCountryCodeSource;
- (long long)getCountryCodeSourceOrDefault;

@end
