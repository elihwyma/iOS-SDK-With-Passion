/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTPhoneNumber, CTXPCServiceSubscriptionContext, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUUID;

@protocol CTMessageAddress><NSCopying;

@interface CTMessage : NSObject

{
    NSObject<CTMessageAddress><NSCopying> *_sender;
    NSMutableArray *_recipients;
    NSMutableArray *_items;
    NSDictionary *_rawHeaders;
    NSDate *_date;
    unsigned int _messageId;
    int _messageType;
    CTPhoneNumber *_serviceCenter;
    NSString *_subject;
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    unsigned int _replaceMessage;
    NSString *_countryCode;
    NSUUID *_uuid;
    _Bool _bypassSupportedMessageModesCheck;
    CTXPCServiceSubscriptionContext *_context;
}

@property (readonly) NSArray *recipients;
@property (readonly) NSDate *date;
@property (readonly) NSArray *items;
@property (readonly) NSDictionary *rawHeaders;
@property (readonly) unsigned int replaceMessage;
@property (nonatomic) unsigned int messageId;
@property (nonatomic) int messageType;
@property (copy, nonatomic) CTPhoneNumber *serviceCenter;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSObject<CTMessageAddress><NSCopying> *sender;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic, readonly) NSString *countryCode;
@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) _Bool bypassSupportedMessageModesCheck;
@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithDate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)addPhoneRecipient:(id)arg1;
- (void)addEmailRecipient:(id)arg1;
- (void)setRawHeaders:(id)arg1;
- (void)setReplaceMessage:(unsigned int)arg1;
- (void)addRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)removeRecipientsInArray:(id)arg1;
- (void)setRecipient:(id)arg1;
- (id)addText:(id)arg1;
- (id)addData:(id)arg1 withContentType:(id)arg2;
- (id)addPart:(id)arg1;
- (void)removePartAtIndex:(unsigned long long)arg1;
- (id)contentTypeParameterWithName:(id)arg1;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)allContentTypeParameterNames;
- (void)setCountryCode:(id)arg1;

@end
