/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSString;

@interface ATLegacyMessage : NSObject

{
    unsigned long long _messageType;
    unsigned int _messageId;
    NSString *_name;
    NSString *_dataClass;
    NSError *_result;
    NSDictionary *_params;
    NSData *_payload;
    double _timestamp;
    NSData *_sig;
    unsigned int _session;
}

@property (nonatomic) unsigned long long messageType;
@property (nonatomic) unsigned int messageId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *dataClass;
@property (retain, nonatomic) NSError *result;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSData *sig;
@property (nonatomic) unsigned int sessionNumber;

+ (id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned int)arg3;
+ (id)messageFromDictionary:(id)arg1;
+ (void)setSessionNumber:(unsigned int)arg1;
+ (id)_messageTypeString:(unsigned long long)arg1;
+ (unsigned int)nextSessionNumber;
+ (unsigned int)currentSessionNumber;
+ (id)messageWithName:(id)arg1 parameters:(id)arg2;
+ (id)messageFromHeader:(id)arg1 withParams:(id)arg2 andPayload:(id)arg3;
+ (id)messageFromData:(id)arg1;

- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)data;
- (id)parameterForKey:(id)arg1;
- (id)partialResponseWithParameters:(id)arg1;
- (id)responseWithResultError:(id)arg1 parameters:(id)arg2;

@end
