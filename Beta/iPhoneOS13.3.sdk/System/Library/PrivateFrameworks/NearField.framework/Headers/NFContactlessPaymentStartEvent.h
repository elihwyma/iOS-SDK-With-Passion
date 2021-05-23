/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NFApplet, NSString;

@interface NFContactlessPaymentStartEvent : NSObject

{
    NSString *_appletIdentifier;
    NSString *_keyIdentifier;
    unsigned short _selectStatus;
    unsigned short _paymentMode;
    NFApplet *_applet;
    NSString *_spIdentifier;
}

@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) unsigned short selectStatus;
@property (nonatomic, readonly) unsigned short paymentMode;
@property (nonatomic, readonly) NSString *spIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)asDictionary;
- (id)appletIdentifier;
- (void)_setApplet:(id)arg1;
- (void)setKeyIdentifier:(id)arg1;

@end
