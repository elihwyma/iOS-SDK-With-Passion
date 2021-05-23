/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARMapsSession : PBCodable

{
    unsigned int _sequenceNumber;
    NSString *_enviroment;
    NSString *_identifier;
    double _relativeTimestamp;
    NSData *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *enviroment;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) double relativeTimestamp;
@property (copy, nonatomic) NSData *metadata;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
