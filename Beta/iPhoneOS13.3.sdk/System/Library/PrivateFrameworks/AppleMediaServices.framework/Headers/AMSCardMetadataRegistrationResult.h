/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AMSCardMetadataRegistrationResult : NSObject

{
    NSString *_cardArtwork;
    long long _cardType;
    NSString *_descriptionLong;
    NSString *_descriptionShort;
    long long _paymentNetwork;
    NSString *_serialNumber;
    NSString *_suffix;
    NSDictionary *_dictionary;
}

@property (retain, nonatomic) NSString *cardArtwork;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSString *descriptionLong;
@property (retain, nonatomic) NSString *descriptionShort;
@property (nonatomic) long long paymentNetwork;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7;

@end
