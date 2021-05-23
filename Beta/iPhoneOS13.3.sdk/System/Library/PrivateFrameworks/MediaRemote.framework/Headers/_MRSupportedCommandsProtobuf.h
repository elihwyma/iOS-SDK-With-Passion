/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _MRSupportedCommandsProtobuf : PBCodable

{
    NSMutableArray *_supportedCommands;
}

@property (retain, nonatomic) NSMutableArray *supportedCommands;

+ (Class)supportedCommandType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSupportedCommand:(id)arg1;
- (unsigned long long)supportedCommandsCount;
- (void)clearSupportedCommands;
- (id)supportedCommandAtIndex:(unsigned long long)arg1;

@end
