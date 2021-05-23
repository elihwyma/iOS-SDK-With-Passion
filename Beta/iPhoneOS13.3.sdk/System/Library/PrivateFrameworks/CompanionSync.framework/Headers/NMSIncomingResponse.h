/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class IDSMessageContext, NSData, NSDate, NSDictionary, NSString;

@interface NMSIncomingResponse : NSObject

{
    unsigned short _messageID;
    NSString *sourceDeviceID;
    NSData *_data;
    NSString *_idsIdentifier;
    NSString *_requestIDSIdentifier;
    NSDate *_requestSent;
    NSDictionary *_requestPersistentUserInfo;
    id _pbResponse;
    IDSMessageContext *_idsContext;
}

@property (nonatomic) unsigned short messageID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) id pbResponse;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *requestIDSIdentifier;
@property (retain, nonatomic) NSDate *requestSent;
@property (retain, nonatomic) NSDictionary *requestPersistentUserInfo;
@property (retain, nonatomic) NSString *sourceDeviceID;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)CPObfuscatedDescriptionObject;

@end
