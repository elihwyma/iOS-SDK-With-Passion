/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NFApplet, NSData, NSDecimalNumber, NSDictionary, NSString;

@interface NFContactlessPaymentEndEvent : NSObject

{
    NSString *_appletIdentifier;
    _Bool _didError;
    unsigned short _status;
    unsigned short _type;
    unsigned short _result;
    unsigned short _informative;
    unsigned int _command;
    NFApplet *_applet;
    NSString *_keyIdentifier;
    NSString *_readerIdentifier;
    NSString *_transactionIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currency;
    NSData *_tlv;
    NSDictionary *_felicaInfo;
    NSDictionary *_parsedInfo;
}

@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) NSString *readerIdentifier;
@property (nonatomic, readonly) NSString *transactionIdentifier;
@property (nonatomic, readonly) _Bool didError;
@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) unsigned short status;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short result;
@property (nonatomic, readonly) unsigned short informative;
@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) NSString *currency;
@property (nonatomic, readonly) NSData *tlv;
@property (nonatomic, readonly) NSDictionary *felicaInfo;
@property (nonatomic, readonly) NSDictionary *parsedInfo;

+ (_Bool)supportsSecureCoding;
+ (_Bool)logsTransactionDetails;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)asDictionary;
- (id)appletIdentifier;
- (void)_setApplet:(id)arg1;

@end
