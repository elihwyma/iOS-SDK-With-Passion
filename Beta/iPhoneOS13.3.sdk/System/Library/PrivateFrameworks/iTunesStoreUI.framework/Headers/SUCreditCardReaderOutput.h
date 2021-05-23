/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSNumber, NSString;

@interface SUCreditCardReaderOutput : SUScriptObject

{
    _Bool _cancelled;
    _Bool _manualEntrySelected;
    NSString *_cardCardholderName;
    NSNumber *_cardExpirationDay;
    NSNumber *_cardExpirationMonth;
    NSNumber *_cardExpirationYear;
    NSString *_cardExpirationStringValue;
    NSString *_cardNumber;
    NSError *_error;
}

@property (nonatomic) _Bool cancelled;
@property (copy, nonatomic) NSString *cardCardholderName;
@property (copy, nonatomic) NSNumber *cardExpirationDay;
@property (copy, nonatomic) NSNumber *cardExpirationMonth;
@property (copy, nonatomic) NSNumber *cardExpirationYear;
@property (copy, nonatomic) NSString *cardExpirationStringValue;
@property (copy, nonatomic) NSString *cardNumber;
@property (nonatomic) _Bool manualEntrySelected;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeKeys;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)scriptAttributeKeys;

@end
