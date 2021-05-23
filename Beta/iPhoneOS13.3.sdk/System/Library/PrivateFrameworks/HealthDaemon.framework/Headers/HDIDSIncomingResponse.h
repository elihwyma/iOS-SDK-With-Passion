/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDIDSMessageCenter, IDSDevice, NSData, NSDate, NSDictionary, NSString;

@interface HDIDSIncomingResponse : NSObject

{
    unsigned short _messageID;
    IDSDevice *_fromDevice;
    NSData *_data;
    NSString *_idsIdentifier;
    NSString *_requestIDSIdentifier;
    NSDate *_requestSent;
    NSDictionary *_requestPersistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
    id _pbResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) HDIDSMessageCenter *messageCenter;
@property (retain, nonatomic) IDSDevice *fromDevice;
@property (nonatomic) unsigned short messageID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) id pbResponse;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *requestIDSIdentifier;
@property (retain, nonatomic) NSDate *requestSent;
@property (retain, nonatomic) NSDictionary *requestPersistentUserInfo;

- (id)nanoSyncDescription;

@end
