/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaSpeechResultSelected : PBCodable

{
    int _source;
    NSString *_resultCandidateId;
}

@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) int source;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
