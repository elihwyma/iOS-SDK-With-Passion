/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest

{
    NSString *_command;
    NSData *_infoDictionary;
    NSString *_seid;
    NSData *_url;
}

@property (retain, nonatomic) NSData *url;
@property (retain, nonatomic) NSString *seid;
@property (retain, nonatomic) NSString *command;
@property (nonatomic, readonly) _Bool hasInfoDictionary;
@property (retain, nonatomic) NSData *infoDictionary;

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
