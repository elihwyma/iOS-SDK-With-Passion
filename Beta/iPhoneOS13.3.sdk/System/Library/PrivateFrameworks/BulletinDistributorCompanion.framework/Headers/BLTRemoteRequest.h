/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class IDSProtobuf, NSNumber, NSString, PBCodable;

@interface BLTRemoteRequest : NSObject

{
    _Bool _allowCloudDelivery;
    unsigned short _type;
    PBCodable *_protobuf;
    CDUnknownBlockType _didSend;
    NSNumber *_timeout;
    CDUnknownBlockType _didQueue;
    NSString *_requestDescription;
    NSString *_uniqueID;
    CDUnknownBlockType _responseCompletion;
    IDSProtobuf *_responseToRequest;
}

@property (retain, nonatomic) IDSProtobuf *responseToRequest;
@property (retain, nonatomic) PBCodable *protobuf;
@property (nonatomic) unsigned short type;
@property (copy, nonatomic) CDUnknownBlockType didSend;
@property (retain, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) CDUnknownBlockType didQueue;
@property (copy, nonatomic) NSString *requestDescription;
@property (nonatomic) _Bool allowCloudDelivery;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) CDUnknownBlockType responseCompletion;

+ (id)remoteRequestWithProtobuf:(id)arg1 type:(unsigned short)arg2;

- (id)description;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2;

@end
