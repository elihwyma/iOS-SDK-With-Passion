/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class IDSMessageContext, NMSIncomingRequest, NSData, NSDictionary, NSSet, NSString;

@protocol OS_os_transaction;

@interface NMSOutgoingResponse : NSObject

{
    _Bool _sent;
    NSSet *targetDeviceIDs;
    NMSIncomingRequest *_request;
    NSData *_data;
    unsigned long long _priority;
    double _sendTimeout;
    NSDictionary *_persistentUserInfo;
    NSDictionary *_extraIDSOptions;
    NSObject<OS_os_transaction> *_transaction;
    NSString *_idsIdentifier;
    id _pbResponse;
    IDSMessageContext *_idsContext;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (weak, nonatomic) NMSIncomingRequest *request;
@property (getter=isSent) _Bool sent;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) id pbResponse;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (retain, nonatomic) NSDictionary *extraIDSOptions;
@property (copy, nonatomic) NSSet *targetDeviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)CPObfuscatedDescriptionObject;
- (void)send;
- (id)_makePBResponse;

@end
