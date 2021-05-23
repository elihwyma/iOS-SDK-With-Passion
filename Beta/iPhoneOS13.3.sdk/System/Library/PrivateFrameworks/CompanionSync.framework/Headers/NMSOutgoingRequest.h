/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NMSMessageCenter, NSData, NSDictionary, NSSet, NSString;

@interface NMSOutgoingRequest : NSObject

{
    _Bool _shouldEncrypt;
    unsigned short _messageID;
    NSSet *targetDeviceIDs;
    NSData *_data;
    NSString *_idsIdentifier;
    unsigned long long _priority;
    double _sendTimeout;
    double _responseTimeout;
    NSDictionary *_persistentUserInfo;
    NSDictionary *_extraIDSOptions;
    NMSMessageCenter *_messageCenter;
    id _pbRequest;
}

@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) id pbRequest;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned short messageID;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (nonatomic) double responseTimeout;
@property (nonatomic) _Bool shouldEncrypt;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (retain, nonatomic) NSDictionary *extraIDSOptions;
@property (copy, nonatomic) NSSet *targetDeviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestWithMessageID:(unsigned short)arg1;

- (id)init;
- (id)CPObfuscatedDescriptionObject;

@end
