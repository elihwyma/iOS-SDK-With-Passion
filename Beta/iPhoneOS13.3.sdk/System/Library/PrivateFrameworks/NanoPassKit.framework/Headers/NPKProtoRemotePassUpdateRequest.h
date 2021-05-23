/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoPass, NSData, NSString;

@interface NPKProtoRemotePassUpdateRequest : PBRequest

{
    NPKProtoPass *_pass;
    NSString *_passID;
    NSData *_updateRequestData;
    _Bool _cancelUpdate;
    _Bool _requestAuthorization;
    _Bool _shouldNotifyUser;
    struct {
        unsigned int cancelUpdate:1;
        unsigned int requestAuthorization:1;
        unsigned int shouldNotifyUser:1;
    } _has;
}

@property (retain, nonatomic) NSString *passID;
@property (nonatomic, readonly) _Bool hasUpdateRequestData;
@property (retain, nonatomic) NSData *updateRequestData;
@property (nonatomic) _Bool hasCancelUpdate;
@property (nonatomic) _Bool cancelUpdate;
@property (nonatomic, readonly) _Bool hasPass;
@property (retain, nonatomic) NPKProtoPass *pass;
@property (nonatomic) _Bool hasRequestAuthorization;
@property (nonatomic) _Bool requestAuthorization;
@property (nonatomic) _Bool hasShouldNotifyUser;
@property (nonatomic) _Bool shouldNotifyUser;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
