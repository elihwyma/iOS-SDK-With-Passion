/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDIDSMessageCenter, HDIDSOutgoingResponse, IDSDevice, NSData, NSString;

@interface HDIDSIncomingRequest : NSObject

{
    _Bool _expectsResponse;
    unsigned short _messageID;
    IDSDevice *_fromDevice;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    HDIDSOutgoingResponse *_response;
    HDIDSMessageCenter *_messageCenter;
    id _pbRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) HDIDSMessageCenter *messageCenter;
@property (retain, nonatomic) IDSDevice *fromDevice;
@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) _Bool expectsResponse;
@property (retain, nonatomic) id pbRequest;
@property (retain, nonatomic) HDIDSOutgoingResponse *response;

- (void)dealloc;
- (void)configureResponse;
- (id)nanoSyncDescription;

@end
