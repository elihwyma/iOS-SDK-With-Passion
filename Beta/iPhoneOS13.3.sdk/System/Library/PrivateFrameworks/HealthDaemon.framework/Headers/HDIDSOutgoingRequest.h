/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDIDSMessageCenter, IDSDevice, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingRequest : NSObject

{
    _Bool _doNotCompress;
    _Bool _queueOnly1;
    _Bool _forceLocalDelivery;
    unsigned short _messageID;
    IDSDevice *_toDevice;
    NSData *_data;
    NSString *_idsIdentifier;
    unsigned long long _priority;
    double _sendTimeout;
    double _responseTimeout;
    NSDictionary *_persistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
    id _pbRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) HDIDSMessageCenter *messageCenter;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) id pbRequest;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) IDSDevice *toDevice;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (nonatomic) double responseTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (nonatomic) _Bool doNotCompress;
@property (nonatomic) _Bool queueOnly1;
@property (nonatomic) _Bool forceLocalDelivery;

+ (id)activationRequestWithRestore:(id)arg1 syncStore:(id)arg2;
+ (id)changeRequestWithChangeSet:(id)arg1 status:(id)arg2 syncStore:(id)arg3;
+ (id)speculativeChangeRequestWithChangeSet:(id)arg1 syncStore:(id)arg2;
+ (id)_requestWithMessageID:(unsigned short)arg1 message:(id)arg2 syncStore:(id)arg3;
+ (id)requestWithMessageID:(unsigned short)arg1 device:(id)arg2;

- (id)init;
- (id)nanoSyncDescription;

@end
