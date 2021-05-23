/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemonTransaction, HDIDSMessageCenter, IDSDevice, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingResponse : NSObject

{
    HDDaemonTransaction *_transaction;
    _Bool _doNotCompress;
    _Bool _forceLocalDelivery;
    _Bool _sent;
    unsigned short _requestMessageID;
    unsigned short _messageID;
    NSString *_requestIdsIdentifier;
    HDIDSMessageCenter *_messageCenter;
    IDSDevice *_toDevice;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    double _sendTimeout;
    NSDictionary *_persistentUserInfo;
    id _pbResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *requestIdsIdentifier;
@property (retain, nonatomic) HDIDSMessageCenter *messageCenter;
@property (nonatomic) unsigned short requestMessageID;
@property (getter=isSent) _Bool sent;
@property (nonatomic) unsigned short messageID;
@property (retain, nonatomic) IDSDevice *toDevice;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) id pbResponse;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (nonatomic) _Bool doNotCompress;
@property (nonatomic) _Bool forceLocalDelivery;

- (id)init;
- (void)dealloc;
- (void)send;
- (id)nanoSyncDescription;
- (void)configureWithActivationRestore:(id)arg1 syncStore:(id)arg2;
- (void)configureWithStatus:(id)arg1 syncStore:(id)arg2;

@end
