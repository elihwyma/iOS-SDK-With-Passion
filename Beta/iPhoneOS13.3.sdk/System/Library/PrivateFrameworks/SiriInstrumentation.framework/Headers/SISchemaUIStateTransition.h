/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaUIStateTransition : PBCodable

{
    int _currentState;
    int _previousState;
    int _siriPresentationType;
    int _dismissalReason;
}

@property (nonatomic) int currentState;
@property (nonatomic) int previousState;
@property (nonatomic) int siriPresentationType;
@property (nonatomic) int dismissalReason;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
