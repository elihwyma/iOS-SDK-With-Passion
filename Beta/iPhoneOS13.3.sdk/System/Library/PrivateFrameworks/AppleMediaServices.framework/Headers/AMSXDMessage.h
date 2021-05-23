/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSXDDevice, NSDate, NSDictionary, NSString;

@protocol NSObject><NSSecureCoding;

@interface AMSXDMessage : NSObject

{
    _Bool _isReply;
    NSString *_objectClassName;
    NSString *_messageID;
    NSDate *_receiptDate;
    AMSXDDevice *_destination;
    double _expirationInterval;
    NSString *_identifier;
    NSString *_logKey;
    id <NSObject><NSSecureCoding> _object;
    AMSXDDevice *_origin;
    long long _purpose;
}

@property (retain, nonatomic) NSString *objectClassName;
@property (nonatomic) _Bool isReply;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSDate *receiptDate;
@property (nonatomic, readonly) NSDictionary *JSONDictionary;
@property (retain, nonatomic) AMSXDDevice *destination;
@property (nonatomic) double expirationInterval;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) id <NSObject><NSSecureCoding> object;
@property (retain, nonatomic) AMSXDDevice *origin;
@property (nonatomic) long long purpose;

+ (_Bool)supportsSecureCoding;
+ (id)messageFromProtoMessage:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 purpose:(long long)arg3 object:(id)arg4;
- (id)createProtoMessage;

@end
