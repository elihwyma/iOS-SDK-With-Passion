/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NNMKProtoContentRequest : PBRequest

{
    unsigned int _fullSyncVersion;
    NSString *_messageId;
    _Bool _highPriority;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int highPriority:1;
    } _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) _Bool hasHighPriority;
@property (nonatomic) _Bool highPriority;

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
