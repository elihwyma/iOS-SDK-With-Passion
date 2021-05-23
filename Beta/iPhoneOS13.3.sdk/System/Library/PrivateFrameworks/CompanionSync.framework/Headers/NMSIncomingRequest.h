/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class IDSMessageContext, NMSMessageCenter, NMSOutgoingResponse, NSData, NSString;

@protocol OS_os_transaction;

@interface NMSIncomingRequest : NSObject

{
    _Bool _expectsResponse;
    unsigned short _messageID;
    NSString *sourceDeviceID;
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    NMSOutgoingResponse *_response;
    NSObject<OS_os_transaction> *_transaction;
    id _pbRequest;
    IDSMessageContext *_idsContext;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) _Bool expectsResponse;
@property (retain, nonatomic) id pbRequest;
@property (retain, nonatomic) NMSOutgoingResponse *response;
@property (retain, nonatomic) NSString *sourceDeviceID;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)allowsUnrepliedRequestsForUnitTesting;
+ (void)setAllowsUnrepliedRequestsForUnitTesting:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)CPObfuscatedDescriptionObject;
- (void)configureResponse;

@end
