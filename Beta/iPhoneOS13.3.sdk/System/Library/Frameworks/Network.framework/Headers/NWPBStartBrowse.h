/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NWPBBrowseDescriptor, NWPBParameters;

@interface NWPBStartBrowse : PBCodable

{
    NSString *_clientUUID;
    NWPBBrowseDescriptor *_descriptor;
    NWPBParameters *_parameters;
}

@property (nonatomic, readonly) _Bool hasDescriptor;
@property (retain, nonatomic) NWPBBrowseDescriptor *descriptor;
@property (nonatomic, readonly) _Bool hasParameters;
@property (retain, nonatomic) NWPBParameters *parameters;
@property (nonatomic, readonly) _Bool hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;

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
