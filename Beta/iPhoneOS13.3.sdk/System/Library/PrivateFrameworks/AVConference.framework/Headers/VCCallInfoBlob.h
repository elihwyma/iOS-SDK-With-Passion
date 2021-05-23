/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCallInfoBlob : PBCodable

{
    unsigned int _callID;
    unsigned int _clientVersion;
    NSString *_deviceType;
    NSString *_frameworkVersion;
    NSString *_osVersion;
}

@property (nonatomic) unsigned int callID;
@property (nonatomic) unsigned int clientVersion;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *frameworkVersion;
@property (retain, nonatomic) NSString *osVersion;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)stringForCheckpoint;

@end
