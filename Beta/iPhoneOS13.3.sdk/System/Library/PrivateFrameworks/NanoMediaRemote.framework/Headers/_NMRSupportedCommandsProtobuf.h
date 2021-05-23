/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NMRSupportedCommandsProtobuf : PBCodable

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
